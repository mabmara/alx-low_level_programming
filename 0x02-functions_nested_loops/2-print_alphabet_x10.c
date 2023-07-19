vi main.h

#ifndef main_h
#define main_h

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
#endif

vi 2-print_alphabet_x10.c

#include "main.h"

/**
 * print_alphabet_x10 - prints lower case alphabet 10 times
 *
 * return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
………………………………….

