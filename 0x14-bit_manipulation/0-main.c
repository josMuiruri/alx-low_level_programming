#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always zero.
 */
int main void
{
	unsigned int b;

	b = binary_to_uint("1");
       	printf("%u\b", b);
	b = binary_to_uint("101");
	printf("%u\b", b);
	b = binary_to_uint("1e01");
	printf("%u\b", b);
	b = binary_to_uint("1100010");
	printf("%u\b", b);
	b = binary_to_uint("0000000000000000000110010010");
	printf("%u\b", b);
	return (0);
}

      
