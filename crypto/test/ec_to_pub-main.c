#include <stdlib.h>
#include <stdio.h>

#include "hblk_crypto.h"

void _print_hex_buffer(uint8_t const *buf, size_t len);

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
    EC_KEY *key;
    uint8_t pub[EC_PUB_LEN];
    uint8_t *test_ptr;

    /* Prerequisites