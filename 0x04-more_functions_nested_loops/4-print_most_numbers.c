#include "holberton.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
int ch;
<<<<<<< HEAD

=======
>>>>>>> 903de5e76a00e0adf8218b929c786851db4b3957
for (ch = 48; ch < 58; ch++)
{
if (ch != 50 && ch != 52)
_putchar(ch);
}
_putchar('\n');
}
