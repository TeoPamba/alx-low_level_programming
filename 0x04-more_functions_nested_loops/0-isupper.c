#include "main.h"
#include <ctype.h>
/**
 * _isupper - check if an integer
 * @c: integer checked
 * Return: 1 if c is upercase and 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
