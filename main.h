#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int percent(void);
int print_char(char c);
int print_string(char *s);
int print_int(int d);
char *intToString(unsigned int n);

#endif
