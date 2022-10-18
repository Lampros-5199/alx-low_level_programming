#include "main.h"
/**
 * _isalpha - print 
 * @c: char to be checked
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a'; && c <= 'z') || (c >= 'A'; && <= 'Z'))
		return (1);
	else
		return (0);
}
