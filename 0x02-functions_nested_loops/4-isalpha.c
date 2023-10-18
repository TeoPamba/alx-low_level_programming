#include <ctype.h>
/**
 * _isalpha - check alphabet
 * @c : character checked
 * Return: 1 if true and 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
