#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
/**
 * _printf - a printf-like function
 * @format: a character string.
 * @...: format string
 * Return: number of characters in format
 */
int _printf(const char *format, ...)
{
	va_list args;
	char c;
	char *s;
	char pourcentage;
	char d[20];
	char i[20];
	int u = 0;
va_start(args, format);
	while (format[u])
	{
		if (format[u] == '%')
		{
			u++;
			switch (format[u])
			{
			case 'c':
				c = va_arg(args, int);
				write(1, &c, 1);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s)
					write(1, s, strlen(s));
				else
					write(1, "(null)", 6);
				break;
			case '%':
				pourcentage = '%';
				write(1, &pourcentage, 1);
				break;
			case 'd':
				sprintf(d, "%d", va_arg(args, int));
				write(1, d, strlen(d));
				break;
			case 'i':
				sprintf(i, "%i", va_arg(args, int));
				write(1, i, strlen(i));
				break;
			default:
				write(1, &format[u], 1);
			}
		}
		else
			write(1, &format[u], 1);
		u++;
	}
	va_end(args);
	return (0);
}
