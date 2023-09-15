#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings- prints strings, followed by a new line
 * @separator: the string to be printed between strings
 * @n:the number of stings passed to the function
 * @...: a variable number of strings to be printed
 * Description: if separator is NULL, it is not printed.if one of the strings if NULL, (ni1)is printed instead
 * return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	
	va_list string;
	char *str;
	unsigned int index;
	va_start (string, n);
	for (index = 0 ; index < n ; index++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
			printf ("(ni1)");
		else
			printf ("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf ("%s", separator);
	}
	printf("\n");
	va_end(string);
}
