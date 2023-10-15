#include "main.h"
/**
 * print_alphabet - Print all alphabets in lover case
 * @c: character to be printed
 * Return: return nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
