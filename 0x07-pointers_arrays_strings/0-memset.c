#include "main.h"
/**
 * *_memset - Fills the first n bytes of the memory area
 * @s: somthing
 * @b: somintt
 * @n: number of sum
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
