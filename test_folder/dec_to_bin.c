#include "main.h"

/**
 * dec_to_bin - base 10 to base 2
 * @n: number
 * Return: base 2 (number)
 */

unsigned int dec_to_bin(unsigned int n)
{
	unsigned int num = n;
	unsigned int bnum = 0;
	unsigned int k = 0;
	unsigned int t = 1;

	while (num /= 2 > 0)
	{
		bnum += (num % 2) * t;

		t *= 10;

		num /= 2;

		k++;
	}

	return (bnum);
}
