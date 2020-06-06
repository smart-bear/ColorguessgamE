#include "blockchain.h"

/**
 * block_is_valid - checks if this and previous block are valid
 * @block: pointer to this block in the chain
 * @prev_block: pointer to previous block in the chain or NULL
 * Return: 0 if valid else 1 if invalid
 */
int block_is_valid(block_t const *block, block_t const *prev_block)
{
uint8_t hash_buf[SHA256_DIGEST_LENGTH] = {0};
block_t const _genesis = GENESIS_BLOC