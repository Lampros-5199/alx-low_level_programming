#include "main.h"
/**
 * print_alphabet - print alphabet
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar("%c", alp);
		_putchar('\n');
	}
	return (0);
}
