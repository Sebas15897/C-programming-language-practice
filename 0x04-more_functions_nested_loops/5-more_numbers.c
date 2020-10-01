#include "holberton.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
int i, c;
<<<<<<< HEAD

=======
>>>>>>> 903de5e76a00e0adf8218b929c786851db4b3957
for (i = 0; i < 10; i++)
{
for (c = 0; c < 15; c++)
{
<<<<<<< HEAD
if (c >= 10)
=======
if (c >= 1)
>>>>>>> 903de5e76a00e0adf8218b929c786851db4b3957
_putchar((c / 10) + 48);
_putchar((c % 10) + 48);
}
_putchar('\n');
}
}
