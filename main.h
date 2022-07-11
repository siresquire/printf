#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int print_add(va_list l, char *b, unsigned int ib);
int print_bnr(va_list l, char *b, unsigned int ib);
unsigned int handl_buf(char *b, char c, unsigned int ib);
int print_buf(char *buf, unsigned int nbuf);
char *fill_binary_array(char *bin, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hexa, int isupp, int limit);

#endif
