#include "holberton.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
<<<<<<< HEAD
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
=======
  int i, j;

  for (i = 0; i < n; i++)
    for (j = 0; j < i; j++)
>>>>>>> 903de5e76a00e0adf8218b929c786851db4b3957
{
_putchar(' ');
}
_putchar(92);
if (i < (n - 1))
_putchar('\n');
}
<<<<<<< HEAD
_putchar('\n');
=======
 _putchar('\n');
>>>>>>> 903de5e76a00e0adf8218b929c786851db4b3957
}
