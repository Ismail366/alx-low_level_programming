#include <stdio.h>

/**
 * main - Entry point
 * The program prints the numbers of base 16
 * in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int chr_dg = 48;
	int chr_ltr = 97;

	while (chr_dg <= 57)
	{
		putchar(chr_dg);
		chr_dg++;
	}
	while (chr_ltr <= 102)
	{
		putchar(chr_ltr);
		chr_ltr++;
	}
	putchar(10);
	return (0);
}
