#include <stdio.h>

/**
 * main -prints number of argument
 * @argc: arguments count
 * @argv: arguments vector
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
