#include "function_pointers.h"
#include <stdlib.h>

/*
 * print_name - Prints the name
 * @name: The name that is going to be displayed
 * @f: The function pointer to take an argument
 * */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
