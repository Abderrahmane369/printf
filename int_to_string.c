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
unsigned int n_c = n;
int k;

while (n_c > 0)
{

n_c /= 10;

n_len++;

}
n_c = n;
k = n_len - 1;

s = malloc(sizeof(char) * (n_len + 1));

if (s == NULL)
return (NULL);

if (n_c == 0)
{
s[0] = '0';
s[1] = '\0';

return (s);
}

while (k >= 0)
{
s[k] = '0' + (n_c % 10);
n_c /= 10;
k--;
}
s[n_len] = '\0';

return (s);
}
