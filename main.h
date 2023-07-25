ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
void percent(void);
void print_char(char c);
void print_string(char *s);
void print_int(int d);
char *intToString(unsigned int n);

#endif
