#include "hblk_crypto.h"

/**
 * ec_verify - verifies a message with public key
 * @key: pointer to struct containing key pair
 * @msg: the message to sign
 * @msglen: length of message
 * @sig: address 