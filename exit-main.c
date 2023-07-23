#include "shell.h"

/**
 * _strncpy - copies string
 * @dest: destination string
 * @src: source string
 * @n:number of characters to  be copied
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;
	char *s = dest;

	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 * _strncat - concatenates 2 strings
 * @dest: first string
 * @src: second string
 * @n: bytes to be used
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	char *s = dest;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 * _strchr - parse string
 * @s: string to be parsed
 * @c: character being search
 * Return:pointer to memory location s
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');
	return (NULL);
}
