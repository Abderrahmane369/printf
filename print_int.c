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

int print_string(char *s)
{
char *str;

if (s)
{
str = s;

int len = strlen(str);
write(1, str, len); // Use strlen to get the correct length
return len; // Return the length including the null terminator
}
else
{
str = "(null)";
write(1, str, 6);
return 6;
}
}
