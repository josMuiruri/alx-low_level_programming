#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * malloc_checked - check description
 * Description: a function that allocates memory using malloc
 * @b: integer
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *n;

n = malloc(b);
if (n == NULL)
	exit(98);
}
