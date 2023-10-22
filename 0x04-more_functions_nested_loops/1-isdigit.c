#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check for a digit 0-9
 * @c: number to be checked
 * Return: 1 if number or otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
