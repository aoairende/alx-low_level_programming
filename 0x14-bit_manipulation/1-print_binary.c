#include "main.h"

/**
 * _power - Entry point.
 *
 * Description: Write a function that prints the binary representation
 * of a number.
 *
 * @base: base parameter.
 * @pow: power parameter.
 *
 * Return: value of the base and power.
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}

/**
 * print_binary - Prints the binary representation of an unsigned number.
 *
 * @n: Number to be printed.
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int s, t;
	char u;

	u = 0;
	s = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (s != 0)
	{
		t = n & s;
		if (t == s)
		{
			u = 1;
			_putchar('1');

		}
		else if (u == 1 || s == 1)
		{
			_putchar('0');
		}
		s >>= 1;
	}
}
