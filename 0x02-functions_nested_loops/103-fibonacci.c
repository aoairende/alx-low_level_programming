#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Each new term in the Fibonacci sequence is generated
 * by adding the previous two terms. By starting with 1 and 2, the first
 * 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
 * By considering the terms in the Fibonacci sequence whose
 * values do not exceed 4,000,000, write a program that finds
 * and prints the sum of the even-valued terms, followed by a new line.
 * You are allowed to use the standard library.
 *
 * Return: Always 0
 *
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}

