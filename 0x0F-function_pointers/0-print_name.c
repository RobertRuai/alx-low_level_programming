#include "function_pointers.h"

/**
 * print_name - entry point
 *
 * description -  a function that prints a name.
 *
 * @name: The character to print
 * @f: The character to print
 *
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
