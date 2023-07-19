vi main.h
#ifndef main_h
#define main_h

int _putchar(char c);
void print_alphabet(void);
#endif



 vi 1-alphabet.c

#include "main.h"

/**
 * print_alphabet -  prints a to z
 *
 * Return: None
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123;  i++)

		_putchar(i);

	_putchar(10);
}
………………………………………………………………………………………………

