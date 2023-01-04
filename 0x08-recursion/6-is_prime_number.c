#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 *
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: 0 if the number is divisible by the divisor
 *         -1 if the number is not divisible by the divisor
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - returns if a number is prime.
 *
 * @n: The number to be checked.
 *
 * Return: 0 if the integer is not a prime number
 *	1 if the integer is a prime number
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}