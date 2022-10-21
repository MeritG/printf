#include "main.h"

/**
 * print_c - prints a char
 * @c: char to print
 *
 * Return: always 1
 */

int print_c(va_list c)
{
	char alx = (char)va_arg(c, int);

	_putchar(alx);
	return (1);
}
