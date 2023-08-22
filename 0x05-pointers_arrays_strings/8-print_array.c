#include <stdio.h>

/**
 * print_array - print n elmentors of an array of intgers
 * @a: arry to be used
 * @n: number of elements to be printed
 * Returun: void
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
