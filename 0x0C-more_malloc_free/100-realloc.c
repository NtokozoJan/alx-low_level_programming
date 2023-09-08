#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size of the allocated space for ptr.
 * @new_size: New size of the memory block.
 *
 * Return: Pointer to the newly reallocated memory block.
 * NULL if new_size is 0 and ptr is not NULL.
 * NULL if malloc fails to allocate memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *p;
	char *np;
	unsigned int copy_size;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	p = ptr;
	np = new_ptr;
	copy_size = (old_size < new_size) ? old_size : new_size;
	for (i = 0; i < copy_size; i++)
	{
		np[i] = p[i];
	}

	free(ptr);

	return (new_ptr);
}
