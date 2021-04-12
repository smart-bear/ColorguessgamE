#include <stdlib.h>

#include "blockchain.h"


void _blockchain_destroy(blockchain_t *blockchain)
{
	if (!blockchain)
		return;

	llist_d