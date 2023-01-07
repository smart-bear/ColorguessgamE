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
EC_KEY *key, *key2;
uint8_t pub[EC_PUB_LEN], pub2[EC_PUB_LEN];

    /* Prerequisites */
key = ec_create();
if (!key)
{
fprintf(stderr, "ec_create() failed\n");
return (EXIT_FAILURE);
}
printf("Successfully created EC key pair\n");

if (!ec_to_pub(key, pub))
{
fprintf(stderr, "ec_to_pub() failed\n");
EC_KEY_free(key);
return (EXIT_FAILURE);
}

printf("Public key: ");
_