#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
char c = 'a';

while (c <= 'z')
{

if (c == 'e' || c == 'q')
{
c++;
}

putchar(c);
c++;

if (c > 'z')
{
putchar('\n');
}
}

return (0);
}
