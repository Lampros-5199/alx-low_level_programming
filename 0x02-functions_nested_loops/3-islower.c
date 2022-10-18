#include "main.h"
/**
 * _islower - print if lower
 * @c: is char to be checked
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
