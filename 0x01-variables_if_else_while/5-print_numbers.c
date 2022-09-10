#include <stdio.h>

/**
 * main - Entry point
 * This program prints the numbers 0 - 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("%s", "\n");
	return (0);
}
