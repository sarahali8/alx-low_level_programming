#include"main.h"

/**
 * _strchr - locates character in a string
 * @s: string to search
 * @c: charcter to search in s
 * Return: s or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
