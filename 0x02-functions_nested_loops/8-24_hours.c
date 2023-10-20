#include "main.h"
/**
 * jack_bauer : prints every minute
 * Return: void
 */
void jack_bauer(void)
{
	int h0;
	int h1;
	int m0;
	int m1;

	for (h0 = 0; h0 <= 2; h0++)
	{
		for (h1 = 0; h1 <= 9; h1++){
			for (m0 = 0; m0 < 6; m0++)
			{
				for (m1 = 0; m1 <= 9; m1++)
				{
					if(h0 == 2 && h1 == 4 && m0 == 0 && m1 == 0)
					{
						return;
					}
					_putchar(h0 + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(m0 + '0');
					_putchar(m1 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
