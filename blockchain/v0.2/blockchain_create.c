#include "blockchain.h"

blockchain_t *blockchain_create(void)
{
block_t const _genesis = GENESIS_BLOCK;

blockchain_t *blockchain;
block_t *ptr;
ptr = (block_t *) malloc(sizeof(block_t));
memcpy(ptr, (block_t *) &_genesis, sizeof(block_t));
blockchain = (blockchain_t *) malloc(sizeof(blockch