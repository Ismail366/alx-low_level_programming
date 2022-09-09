#include <stdio.h>

/**
 * main - Entry point
 * This progrm prints the
 * alphabets in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar(10);
	return (0);
}
