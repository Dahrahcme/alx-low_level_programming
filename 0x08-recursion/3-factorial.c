#include "main.h"

/**
 * factorial - returns the factorial of a number
 *
 * @n: the number to find factorial for
 *
 * Return: if n < 0, return -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
