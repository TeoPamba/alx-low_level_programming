#include "main.h"
/**
 * print_alphabet - Print all alphabets in lover case
 * Return: return nothing
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
