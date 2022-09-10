#include <stdio.h>

/**
 * main - Entry point
 * The program prints combination of single numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;

	for (; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
