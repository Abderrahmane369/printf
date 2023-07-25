#include "main.h"

/**
 * dec_to_bin - base 10 to base 2
 * @n: number
 * Return: base 2 (number)
 */

int dec_to_bin(unsigned int n)
{
	unsigned int num = n;
	unsigned int bnum = 0;
	unsigned int k = 0;

	while (num /= 2 > 0)
	{
		bnum += (num % 2) * pow(10, k);

		num /= 2;

		k++;
	}

	return (bnum);
}
