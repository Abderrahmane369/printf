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

int print_integer(int n)
{
	char *p_buff;
	int size;

	p_buff = itoa(n, 10);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
