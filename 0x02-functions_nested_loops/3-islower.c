vi main.h

#ifndef main_h
#define main_h

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
#endif


vi 3-islower.c

#include "main.h"

/**
 * _islower - checks if an entered character is lower case
 * @c: character to check
 * Return: 1 for lower case and 0 for upper case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

vi main.h

#ifndef main_h
#define main_h

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
#endif

