#include "blockchain.h"

/**
* block_is_valid - check if a block is valid
* @block: pointer to the block that we want to verify
* @prev_block: pointer to the prev block
* Return: 1 if the block is invalid
* 0 if the block is valid
*/

int block_is_valid(block_t const *block, block_t const *prev_block)
{
uint8_t hash_buffer[SHA256_DIGEST_LENGTH] = {0};
block_t GENESIS = GENESIS_BLOCK;
if (!block || (!prev_block && block->info.index != 0))
return (1);
if (block->info.index == 0)
return (memcmp(block, &GENESIS, sizeof(GENESIS)));
if (block->info.index != prev_