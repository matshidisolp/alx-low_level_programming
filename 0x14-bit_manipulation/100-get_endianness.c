#include "main.h"

/**
 * get_endianness - checks for machine endianess
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);
	return (0);
}
