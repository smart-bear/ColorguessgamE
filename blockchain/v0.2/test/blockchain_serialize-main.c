#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "blockchain.h"

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
blockchain_t *blockchain;
block_t *block;

blockchain = blockchain_create();
block = llist_get_head(blockchain->chain);

block = block_create(block, (int8_t *)"Holberton", 9);
block_hash(block, block->hash);
