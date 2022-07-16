#include "hblk_crypto.h"

/**
 * ec_load - load an EC key pair from the disk
 * @folder: path to folder from which to load the keys
 *
 * Return: pointer to created EC key pair, NULL on error
 */
EC_KEY *ec_load(char const *folder)
{
	EC_KEY *key = NULL;
	char buf