#include "main.h"
/**
 * print_alphabet - prints alphabet
 * main - Entry point
 * Description: prints alphabet in lower case
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char  chr;

	for (chr = 97; chr <= 122; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
}
