#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
        {
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	i++;
	}
}
