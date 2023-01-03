#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
