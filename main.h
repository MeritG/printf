#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print_struct - structure for printing various types
 * @t: type to print
 * @f: function to print
 */

typedef struct print_struct
{
	char *t;
	int (*f)(va_list);
} print_type;


int _printf(const char *format, ...);
int _putch%(va_list %);
int print_d(va_list d);
int print_i(va_list i);

#endif
