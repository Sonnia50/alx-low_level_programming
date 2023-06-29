#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 'a'; d <= 'z'; d++)
		putchar(d);
	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
