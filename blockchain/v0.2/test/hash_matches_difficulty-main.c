#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "blockchain.h"

/**
 * _print_hex_buffer - Prints a buffer in its hexadecimal form
 *
 * @buf: Pointer to the buffer to be printed
 * @len: Number of bytes from @buf to be printed
 */
static void _print_hex_buffer(uint8_t const *buf, size_t len)
{
size_t i;

for (i = 0; buf && i < len; i++)
printf("%02x", buf[i]);

fflush(NULL);
}

/**
 * test_hash_matches_difficulty - Test the hash_matches_difficulty function
 *
 * @hash:       Tested hash
 * @difficulty: Tested difficulty
 */
void test_hash_matches_difficulty(uint8_t const *hash, uint32_t difficulty)
{
printf("Hash: ");
_print_hex_buffer(ha