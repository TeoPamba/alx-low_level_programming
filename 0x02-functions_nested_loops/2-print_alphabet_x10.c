#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets ten times
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
