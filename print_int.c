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

int print_int(int d)
{
char *s;
int len = 0;

if (d < 0)
{
print_char('-');

len++;

d = -d;
}
s = intToString((unsigned int)d);

print_string(s);

len += strlen(s);

free(s);

return (len);
}
