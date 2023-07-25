#include "shell.h"

/**
 * _strlen - returns string length
 * @s: string
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - compares strings
 * @s1: first string
 * @s2: second string
 * Return: 0 is strings are the same, else negative if s2 > s1, else positive
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - checks for char in a string
 * @haystack: string to search
 * @needle: string to find
 * Return: address of the haystack else NULL
 */

char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
	{
		if (*needle++ != *haystack++)
			return (NULL);
		return ((char *)haystack);
	}
}

/**
 * _strcat - concatenates strings
 * @dest: destination buffer
 * @src: source buffer
 * Return: pointer to destination buffer
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
