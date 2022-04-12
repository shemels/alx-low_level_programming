#include "main.h"
/**
 * print_last_diggit - prints the last digit
 * @n: take ln an integer
 * Return: Returns output
 */
int print_last-digit(int c)
{
int ln = n % 10;

if (n < 0)
ln = ln * -1;
_putchar(ln + '0');
return (ln);
}
  
