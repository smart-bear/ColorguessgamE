#include "hblk_crypto.h"

/**
 * ec_from_pub - create an EC_KEY structure from a public key
 * @pub: public key to be converted
 *
 * Return: pointer to created EC_KEY, 