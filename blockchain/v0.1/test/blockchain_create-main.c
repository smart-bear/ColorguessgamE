#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <llist.h>

#include "blockchain.h"

void _blockchain_print(blockchain_t const *blockchain);
void _blockchain_destroy(blockchain_t *blockchain);

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
blockchain_t *blockchain;
blockchain_t *blockchain2;

blockchain = blockchain_create();

_blockcha