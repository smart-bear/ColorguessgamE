#include "blockchain.h"

uint8_t *block_hash(block_t const *block,
		    uint8_t hash_buf[SHA256_DIGEST_LENGTH])
{
memset(hash_buf, 0, SHA256_DIGEST_LENGTH);
retu