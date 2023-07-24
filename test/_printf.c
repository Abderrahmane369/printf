#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _printf - a printf-like function
 * @format: a character string.
 * @...: format string
 * Return: CHARACTERS LENGTH
 */

int _printf(const char *format, ...)
{
va_list args;
int len = 0, u = 0;
va_start(args, format);
if (!format || !format[0])
return (-1);
while (format[u])
{
if (format[u] == '%')
{
u++;
switch (format[u])
{
case 'c':
len += print_char(va_arg(args, int));
break;
case 's':
len += print_string(va_arg(args, char*));
break;
case 'd':
case 'i':
len += print_int(va_arg(args, int));
break;
case '%':
len += percent();
break;
default:
write(1, &format[u], 1);
}
}
else
{
write(1, &format[u], 1);
len++;
}
u++;
}
va_end(args);
return (len);
}
