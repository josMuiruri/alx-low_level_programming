#include "main.h"
/**
 * main - my entry point
 * Description: program that prints _putchar 
 * Return: 0
 */
int main(void)
{
	char ch[8] = "_putchar";
	int m;

	for (m = 0; m < 8; m++)
		_putchar(ch[m]);

	_putchar('\n');

	return (0);
}
