#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<string.h>

unsigned int binary_to_uint(const char *);
void print_binary(unsigned long int);
int _putchar(char);
int get_bit(unsigned long int, unsigned int);
int set_bit(unsigned long int *, unsigned int);
int clear_bit(unsigned long int *n, unsigned int index);

#endif /*main.h*/
