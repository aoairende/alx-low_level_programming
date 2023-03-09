#include "main.h"

/**
 * check - Entry point
 *
 * Description: Write a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 *
 * Prototype: int is_prime_number(int n);
 *
 * @a:int
 * @b:int
 *
 * Return:int
 */

int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
