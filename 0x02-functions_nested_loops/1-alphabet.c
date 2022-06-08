#include "main.h"

/**
 * print_alphabet -prints lower case alphabet
 * Description: prints lower alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
