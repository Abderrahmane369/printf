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
int len = 0;
va_start(args, format);
if (!format)
return (-1);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
len += print_char(va_arg(args, int));
break;
case 's':
len += print_string(va_arg(args, char*));
break;
case '%':
len += percent();
break;
case ' ':
u++;
len++;
break;
default:
write(1, &(*format), 1);
}
}
else
{
write(1, &(*format), 1);
len++;
}
format++;
}
va_end(args);
return (len);
}
