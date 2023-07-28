#include "shell.h"

/**
 * mem_set - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: byte to fill *s
 * @n: amount of bytes to be filled
 * Return: pointer to memory area s
 */

char *mem_set(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - frees a string of strings
 * @pp: string of strings
 * Return: void
 */

void ffree(char *pp)
{
	if (!pp)
		return;
	for (int i = 0; pp[i]; i++)
		free(pp[i]);
	free(pp);
}

/**
 * _realloc - reallocates block of memory
 * @ptr: pointer to previously allocated block
 * @old_size: byte size of previous block
 * @new_size: bytes size of new block
 * Return: pointer to old block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new));
	if (!new_size)
		return (free(ptr), NULL);

	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
