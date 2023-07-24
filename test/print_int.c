#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * print_int - prints integers.
 * @d : integer.
 */
void print_int(int d)
{
	if (d == 0)
	{
		print_char ('0');
		return;
	}
	else if (d < 0)
	{
		print_char ('-');
		d = -d;
	}
	print_string(intToString(d));
}
