#include "main.h"
/**
 * print_most_numbers - print numbers 0 - 9
 */
void print_most_numbers(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
		if (i == 2 && i == 4)
			continue;
	}
	_putchar('\n');
}
