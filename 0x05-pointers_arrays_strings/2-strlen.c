#include "holberton.h"

/**
 * _strlen - length of string
<<<<<<< HEAD
 *@s: char var
 * Return: length of string
 */

int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
i++;
return (i);
=======
 *@s: char a var. 
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
>>>>>>> 903de5e76a00e0adf8218b929c786851db4b3957
}
