#include <stdio.h>
/**
 * _puts - function that prints a string
 * @str: string to be printed
 * Returun: void
 */
void _puts(char *str)
{
	int i;
	for (i = 0 ; str[i] != '\0' ; i++)
		putchar(str[i]);
	putchar('\n');
}
