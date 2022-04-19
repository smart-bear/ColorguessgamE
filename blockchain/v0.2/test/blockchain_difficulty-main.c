
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "blockchain.h"

void _blockchain_print_brief(blockchain_t const *blockchain);

static block_t *_add_block(blockchain_t *blockchain, block_t const *prev,
char const *s)
{
block_t *block;

usleep(300000); /* Simulate block mining ... */
block = block_create(prev, (int8_t *)s, (uint32_t)strlen(s));

block->info.difficulty = blockchain_difficulty(blockchain);
block_hash(block, block->hash);
llist_add_node(blockchain->chain, block, ADD_NODE_REAR);

return (block);
}

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{