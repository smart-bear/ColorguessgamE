#include "blockchain.h"

uint8_t *block_hash(block_t const *block,
		    uint8_t hash_buf[SHA256_