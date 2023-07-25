#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * print_int - prints integers.
 * @d : integer.
 * Return: d bytes.
 */

// Function to print an integer (with special handling for INT_MIN)
int print_int(int d) {
char *s;
int len = 0;

if (d == INT_MIN) {
s = intToString((unsigned int)d);
len += print_string(s);
free(s);
} else {
if (d < 0) {
print_char('-');
len++;
d = -d;
}
s = intToString(d);
len += print_string(s);
free(s);
}

return len;
}

