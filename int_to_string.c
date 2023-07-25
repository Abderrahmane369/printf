#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * intToString - integer to string
 * @n: the integer
 * Return: the string
 */

char *intToString(unsigned int n)
{
char *s;
int n_len = 0;
int n_c = n;
int k;

while (n_c > 0)
{
n_c /= 10;
n_len++;
}
n_c = n;
k = n_len;

s = malloc(sizeof(char) * (n_len + 1));

while (k >= 0)
{
s[k] = '0' + n % 10;

n /= 10;

k--;
}
s[n_len] = '\0';
return (s);
}
