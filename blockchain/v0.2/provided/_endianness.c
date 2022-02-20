#include "endianness.h"

/**
 * _get_endianness - Get current endianness
 *
 * Return: 1 for little endian, 2 for big endian, 0 for unknown
 */
uint8_t _get_endianness(void)
{
	_endian_t order = { 1 };

	if (order.bytes[0] 