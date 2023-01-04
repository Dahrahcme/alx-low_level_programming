#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * find_sqrt - finds the natural square root of a number
 *
 * @num: the number whose natural square root is required
 * @root: the root to be tested
 *
 * Return: -1 if number does not have a natural square root
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number
 *
 * Return: returns -1 if the number has no natural root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
