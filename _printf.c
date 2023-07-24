#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - a printf-like function
 * @format: a character string.
 * @...: format string
 * Return: CHARACTERS LENGTH
 */
int _printf(const char *format, ...)
{
va_list args;
int u = 0, len = 0;
va_start(args, format);
while (format[u])
{
if (format[u] == '%')
{
u++;
switch (format[u])
{
case 'c':
print_char(va_arg(args, int));
len--;
break;
case 's':
print_string(va_arg(args, char*));
len--;
break;
case 'd':
print_int(va_arg(args, int));
len--;
break;
case '%':
print_percent();
len--;
break;
default:
write(1, &format[u], 1);
}
len++;
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