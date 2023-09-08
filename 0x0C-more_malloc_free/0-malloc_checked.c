#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and exit if failed
 * @b: number of byte to allocate
 * Return: apointer to the allocted memory
 */

void *malloc_checked(unsigned int b)
{
	void *m;
	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
