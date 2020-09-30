#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Hexadecimal Numbers
 * Return: 0 for success
 */
int main(void){
char ch;
for (ch = '0'; ch <='9'; ch++)
_putchar(ch);
for (ch = 'a'; ch <='f'; ch++)
_putchar(ch);
_putchar('\n');
return(0);
}
