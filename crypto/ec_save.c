#include "hblk_crypto.h"

/**
 * ec_save - save existing EC key pair to disk
 * @key: EC key pair to save
 * @folder: path to folder to save keys
 *
 * Return: 1 on success, 0 on error
 */
int ec_save(EC_KEY *key, char const *folder)
