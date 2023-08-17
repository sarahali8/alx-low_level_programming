#include "main.h"

/**
 * print_numbers - print numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;
	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j <= 14 ; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
