#include <stddef.h>
#include <stdio.h>
#include <stdint.h>

/**
 * _print_hex_buffer - Prints a buffer in its hexadecimal form
 *
 * @buf: Pointer to the buffer to be printed
 * @len: Number of bytes from @buf to be printed
 */
void _print_hex_buffer(uint8_t const *buf, size_t len)
{