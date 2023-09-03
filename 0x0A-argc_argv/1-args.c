#include <stdio.h>

/**
 * main -prints number of argment
 * @argc:  arguments count
 * @argv:  arguments vector
 * Return: always 0 (success)
 */

int main(int argc, char * argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
