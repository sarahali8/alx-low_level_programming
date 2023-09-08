#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  _realloc - reallocate memory in the heap
 *  @ptr: former pointer to the old memory allocated
 *  @old_size: old size alloceted by malloc in the heap
 *  @new_size: new size alloceted by the _realloc function
 *  Return: apointer to nearly allocted memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t i, max = new_size;
	char *ol = ptr;
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0 ; i < max ; i++)
		p[i] = ol[i];
	free(ptr);
	return (p);
}
