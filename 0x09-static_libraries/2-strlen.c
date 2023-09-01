#include <stdio.h>

/**
 * _strlen - retun the length of a string
 *
 * @s: string to be counted
 *
 * Returun: length of the sting
 */

int _strlen(char *s)
{
        int i;
        int count = 0;
        for (i = 0 ; s[i] != '\0' ; i++)
                count++;
        return (count);
}
