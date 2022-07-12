#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int print_add(va_list l, char *b, unsigned int ib);
int print_bnr(va_list l, char *b, unsigned int ib);
int print_buf(char *b, unsigned int n);
int print_chr(va_list l, char b, unsigned int i);
int print_hex(va_list l, char *b, unsigned int ib);
int print_int(va_list l, char *b, unsigned int ib);
int printlhex(va_list l, char *b, unsigned int ib);
int printlint(va_list l, char *b, unsigned int ib);
int print_oct(va_list l, char *b, unsigned int ib);
int printloct(va_list l, char *b, unsigned int ib);
int printlunt(va_list l, char *b, unsigned int ib);
int printlupx(va_list l, char *b, unsigned int *ib);
int printnhex(va_list l, char *b, unsigned int *ib);
int printnoct(va_list l, char *b, unsigned int ib);
int printnupx(va_list l, char *b, unsigned int *ib);
unsigned int handl_buf(char *b, char c, unsigned int ib);
int print_buf(char *buf, unsigned int nbuf);
char *fill_binary_array(char *bin, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hexa, int isupp, int limit);

#endif
