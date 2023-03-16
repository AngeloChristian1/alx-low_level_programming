#include "main.h"
/**
 * is_number - check if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if str is a number, 0 otherwise
 */
int is_number(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

/**
 * main - entry point
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    if (!is_number(argv[1]) || !is_number(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int result = num1 * num2;

    printf("%d\n", result);
    return (0);
}
