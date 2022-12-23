#include "main.h"

/**
 * print_number - print a intger
 * @g: intger to be printed
 *
 */
void print_number(int g)
{

unsigned int n1;
if (g < 0)
{
n1 = -g;
_putchar('-');
}
else
{
n1 = g;

}

if (n1 / 10)
print_number(n1 / 10);

_putchar((n1 % 10) + '0');

}
