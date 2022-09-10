#include <stdio.h>
/**
 * main - Entry point
 * This program prints the alphabets
 * in lowercase with the exception of
 * "q" and "e"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int chr = 'a';

	for (; chr <= 'z'; chr++)
	{
		if (chr == 'q' || chr == 'e')
			continue;
		else
			putchar(chr);
	}
	putchar(10);
	return (0);
}
