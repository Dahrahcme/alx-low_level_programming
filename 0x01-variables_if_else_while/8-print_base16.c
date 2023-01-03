#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char hexadec;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (hexadec = 'a'; hexadec <= 'f'; hexadec++)
		putchar(hexadec);
	putchar('\n');
	return (0);
}
