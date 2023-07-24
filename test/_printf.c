#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * switchChar - function that switch the char case
 * @ch: the char.
 * @args: the arguments.
 */

void switchChar(char ch, va_list args)
{
	char c, pourcentage;
	char *s;
	char d[20], i[20];
	int u = 0;

	switch (ch)
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
			write(1, "(nil)", 6);
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
	default;
	write(1, &ch, 1);
	}
}

/**
 * _printf - a printf-like function
 * @format: a character string.
 * @...: format string
 * Return: number of characters in format
 */

int _printf(const char *format, ...)
{
	va_list args;

	int u = 0;

	va_start(args, format);

	while (format[u])
	{
		if (format[u] == '%')
		{
			u++;
			switchChar(format[u], args);
		}
		else
		{
			write(1, &format[u], 1);
		}
		u++;
	}
	va_end(args);

}
