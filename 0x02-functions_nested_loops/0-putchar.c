#ifndef main_h
#define main_h

int _putchar(char c);
#endif

vi 0-putchar.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char ch[8] = "_putchar";

	for (i = 0; i < 8; i++)
		_putchar(ch[i]);
	_putchar('\n');

	return (0);
}

