#include "shell.h"

/**
 * bfree - frees pointer
 * @ptr: address to be cleared
 * Return: 1 if free, else 0
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
