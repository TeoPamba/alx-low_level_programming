#include <ctype.h>
/**
 * _islower - checks if the character is lowercase
 * @c : character checked
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
