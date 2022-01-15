#include "blockchain.h"

/**
 * write_block - a function that serializes a Blockchain into a file
 * @ptr: pointer to the block to be serialized
 * @idx: index of the parameter
 * @arg: The file in which the data will be written
 * Return: 0 upon success, or -1 upon failure
 */
int write_block(llist_node_t ptr, unsigned int idx, void *arg)
{
FILE *fp;
block_t *block = ptr;