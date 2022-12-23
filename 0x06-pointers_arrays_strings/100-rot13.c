#include "main."

/**
 * rot13 - check the code a sting in rot 13
 *@g: string to be encoded
 * Return : Always 0;
 */
char *rot13(char *g)
{
int i;
int j;

char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; g[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[g] == a[j])
{
s[g] = b[j];
break;
}
}

}

return (g);
}
