#include "main.h"



/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line
 */
void print_alphabet_x10(void)
{
char ge;
int i;
i = 0;
while (i < 10)
{
ge = 'a';
while (ge <= 'z')
{
_putchar(ge);
ge++;
}
_putchar('\n');
i++;
}


}
