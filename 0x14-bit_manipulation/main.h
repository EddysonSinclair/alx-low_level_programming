#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
int mypower(int base, int exponent);
void print_binary(unsigned long int n);
void recursion(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
unsigned int count_bit(unsigned long int number);
#endif