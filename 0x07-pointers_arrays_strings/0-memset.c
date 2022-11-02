#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area
 * @s: somthing
 * @c: The character to fill the memory area with
 * @n: number of sum
 *
 * Return: A pointer to the filled memory area @s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
