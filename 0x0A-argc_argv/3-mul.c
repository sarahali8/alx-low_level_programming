#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -print sum of 2 numbers
 * @argc:  arguments count
 * @argv:  pointer to an array
 * Return: always 0 (success) non-zero-fail
 */

int main (int argc, char *argv[])
{
	int n1 = 1, n2 = 0;
	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
