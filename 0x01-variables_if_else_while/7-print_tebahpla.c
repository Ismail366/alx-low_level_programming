#include <stdio.h>

/**
 * main - Entry point
 * This program prints alphabets
 * in lowercase in reverse order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int chr = 'z';

	while (chr >= 'a')
	{
		putchar(chr);
		chr--;
	}
	putchar(10);
	return (0);
}
