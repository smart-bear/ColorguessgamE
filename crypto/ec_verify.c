#include "hblk_crypto.h"

/**
 * ec_verify - verifies a message with public key
 * @key: pointer to struct containing key pair
 * @msg: the message to sign
 * @msglen: length of message
 * @sig: address to store signature
 * Return: 1 if verified else 0
 */
int ec_verif