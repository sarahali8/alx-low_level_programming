#include"main.h"
#include <stddef.h>

/**
 * _strchr - locates character in a string
 * @s: string to search
 * @c: charcter to search in s
 * Return: s or 0
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
        return ('0');
}
