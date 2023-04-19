#include "function_pointers.h"
/**
 * print_name - Entry point to print a name
 * @name: The pointer to the name
 * @f: The function pointer casted on char pointer
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
