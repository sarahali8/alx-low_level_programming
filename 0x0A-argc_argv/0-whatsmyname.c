#include <stdio.h>

/**
 * main -prints the name of the program
 * @argc: number of arguments
 * @argv: number of arguments
 * Returun: always 0 (success)
 */

int main (int argc , char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
		return (0);
}
