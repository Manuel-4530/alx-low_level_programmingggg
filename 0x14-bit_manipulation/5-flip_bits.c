#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: First digit
 * @m: Second digit
 *
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
