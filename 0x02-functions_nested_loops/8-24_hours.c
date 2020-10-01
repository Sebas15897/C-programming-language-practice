#include "holberton.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
int a, b, c, d;

for (a = 48; a <= 50; a++)
{
for (b = 48; b <= 57; b++)
{
for (c = 48; c <= 53; c++)
{
for (d = 48; d <= 57; d++)
{
if (a >= 50 && b >= 52)
break;
_putchar(a);
_putchar(b);
_putchar(58);
_putchar(c);
<<<<<<< HEAD
_putchar(d);
=======
 _putchar(d);
>>>>>>> 903de5e76a00e0adf8218b929c786851db4b3957
_putchar('\n');
}
}
}
}
}
