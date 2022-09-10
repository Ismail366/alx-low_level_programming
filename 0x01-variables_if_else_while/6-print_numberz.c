#include <stdio.h>

/**
 * main - Entry point
 * This program prints the numbers 0 - 9
 * without the use of the char type
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar(10);
	return (0);
}
