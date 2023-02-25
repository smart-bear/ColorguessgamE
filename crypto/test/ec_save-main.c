#include <stdlib.h>
#include <stdio.h>

#include "hblk_crypto.h"

void _print_hex_buffer(uint8_t const *buf, size_t len);

/**
 * main - Entry point
 *
 * @ac: Arguments count
 * @av: Arguments vector
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int ac, char **av)
{
EC_KEY *key;
uint8_t pub[EC_PUB_LEN];

if (ac < 2)
{
fprintf(stderr, "Usage: %s <path>\n", av[0]);
return (EXIT_FAILURE);
}

key = ec_crea