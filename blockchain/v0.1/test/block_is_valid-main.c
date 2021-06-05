#include <stdlib.h>
#include <stdio.h>

#include "blockchain.h"

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
blockchain_t *blockchain;
block_t *first, *block;

blockchain = blockchain_create();
first = l