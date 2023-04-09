#include "main.h"


#define BUFFER_SIZE 128

/**
 * print_error - Print an error message to stderr and exit with status code 98
 * @msg: The error message to print
 */
void print_error(char *msg)
{
        fprintf(stderr, "Error: %s\n", msg);
        exit(98);
}

/**
 * print_elf_header - Display information from an ELF header
 * @header: A pointer to the ELF header
 */
void print_elf_header(Elf64_Ehdr *header)
{
        printf("ELF Header:\n");
        printf("  Magic:   ");
        for (int i = 0; i < EI_NIDENT; i++)
                printf("%02x ", header->e_ident[i]);
        printf("\n");
        printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
        printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
        printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
        printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == 0 ? "UNIX System V ABI" : "Other");
        printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
        printf("  Type:                              %s\n", header->e_type == ET_NONE ? "NONE (Unknown Type)" :
                                                                 header->e_type == ET_REL ? "REL (Relocatable file)" :
                                                                 header->e_type == ET_EXEC ? "EXEC (Executable file)" :
                                                                 header->e_type == ET_DYN ? "DYN (Shared object file)" :
                                                                 header->e_type == ET_CORE ? "CORE (Core file)" :
                                                                 "Unknown");
        printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Display information from the ELF header of a file
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
        int fd;
        Elf64_Ehdr header;
        ssize_t bytes_read;

        if (argc != 2)
                print_error("Invalid number of arguments");

        fd = open(argv[1], O_RDONLY);
        if (fd == -1)
                print_error("Could not open file");

        bytes_read = read(fd, &header, sizeof(header));
        if (bytes_read == -1)
                print_error("Could not read from file");
        if (bytes_read != sizeof(header))
                print_error("Could not read ELF header");

        if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
            header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
                print_error("File is not an ELF file");

        print_elf_header(&header);

        if (close(fd) == -1)
                print_error("Could not close file");

        return (0);
}
