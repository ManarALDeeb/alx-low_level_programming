#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the printing function
 */
void print_name(char *nome, void (*f)(char *))
{
	if (!nome || !f)
		return;
	f(nome);
}
