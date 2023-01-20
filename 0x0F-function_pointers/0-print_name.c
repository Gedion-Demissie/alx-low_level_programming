#include "function_pointers.h"

/**
 * aprint_name - prints a name
 *  @name: the string name
 *  @f: the printing function pointer
 *
 *   Return: Always 0
 */
void print_name(char *name, void (*f)(char *)
{
if (name && f)

f(name);
}
