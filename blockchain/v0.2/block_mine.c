#include "blockchain.h"

/**
* block_mine - mine block
* @block: block to be mined
*/
void block_mine(block_t *block)
{
	block->info.nonce = 0;
	do {
		++block