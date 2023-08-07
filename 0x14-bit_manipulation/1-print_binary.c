#include "main.h"

/**
 *print_bi - prints the binary representation of number
 *@n: number to print in binary
 *
 *Return: void
 */
void print_bi(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
  *print_binary- prints out the binary equivalent of a decimal number
  *@n: decimal number to be printed in binary
  *
  *Return: void
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bi(n);
	}
}
