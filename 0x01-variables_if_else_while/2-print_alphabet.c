#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 *
 * Return: Always o
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
