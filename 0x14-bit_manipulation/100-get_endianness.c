#include "main.h"

/**
 * determine_endianness - determines the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int determine_endianness(void)
{
	unsigned int value;
	unsigned char *byte;

	value = 1;
	byte = (unsigned char *)&value;

	return ((int)*byte);
}
