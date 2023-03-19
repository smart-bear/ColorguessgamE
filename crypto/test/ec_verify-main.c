#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "hblk_crypto.h"

void _print_hex_buffer(uint8_t const *buf, size_t len);

/**
 * test_ec_sign - Test the ec_sign function
 *
 * @key: Pointer to the EC Key pair to use to sign the message
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
static int test_ec_sign(EC_KEY const *key)
{
uint8_t const str[] = "Holberton";
sig_t sig;

if (!ec_sign(key, str, strlen((char *)str),