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
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
