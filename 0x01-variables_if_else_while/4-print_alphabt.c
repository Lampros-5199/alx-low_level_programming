#include <stdio.h>
/**
 * main - print alphaabet except.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[24]  = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
