#include "blockchain.h"

blockchain_t *blockchain_create(void)
{
block_t const _genesis = GENESIS_BLOCK;

blockchain_t *blockchain;
block_t *ptr;
ptr = (block_t *) malloc(si