#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

int _printf(const char *format, ...);
int percent(void);
int print_char(char c);
int print_string(char *s);
int print_int(int d);
char *intToString(unsigned int n);
unsigned int dec_to_bin(unsigned n);

#endif
