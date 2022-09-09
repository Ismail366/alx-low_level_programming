#include <stdio.h>

/**
 * main - Entry point
 * This program prints the alphapbets
 * in lowercase and uppercase followed
 * by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int chr_s, chr_b;

	chr_s = 'a';
	chr_b = 'A';
	while (chr_s <= 'z')
	{
		putchar(chr_s);
		chr_s++;
	}
	while (chr_b <= 'Z')
	{
		putchar(chr_b);
		chr_b++;
	}
	putchar(10);
	return (0);
}
