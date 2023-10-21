#include "main.h"
#include <stdio.h>
/**
 * times_table - gives a multiplication
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int mult = a * b;

			if (mult <= 9 )
			{
				printf("%d,  ", mult);
			}
			else
			{
				printf("%d, ", mult);
			}
		}
		printf("\n");
	}

}
