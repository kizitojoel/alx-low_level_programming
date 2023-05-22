#ifndef _BIT_HEADER_
#define _BIT_HEADER_
#include <stdio.h>

unsigned int binary_to_uint(const char *b);
int power(int n);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif
