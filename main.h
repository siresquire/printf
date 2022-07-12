#ifndef PRINT_H
#define PRINT_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct structprint - structure containing
 * @q: the location and method to translate data to characters.
 * @u: print function for specific type.
 * Return: int
 */
typedef struct structprint
{
	char *q;
	int (*u)(va_list);
} strum;

int _putchar(char ch);
int _puts(char *string);
int print_c(va_list);
int print_str(va_list);
int (*manager(const char *format))(va_list);
int _printf(const char *format, ...);
int print_int(va_list ap);
int integer(int number);
int count_digit(int number);
int _abs(int number);
int print_percent(va_list ap);
int print_bin(va_list ap);
int print_x(va_list ap);
int print_hex(unsigned int n, unsigned int c);
int print_X(va_list ap);
int print_dec(va_list ap);
int print_oct(va_list ap);
int print_spestr(va_list ap);
int print_p(va_list ap);
int print_revstr(va_list ap);
int print_rot13(va_list ap);
#endif
