#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
* Infinity loop happens because we don't increment the value of i
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);/*We forgot to increment i inside the loop*/
	
	}

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
