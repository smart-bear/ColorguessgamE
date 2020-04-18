#include "blockchain.h"
#include <time.h>
/**
 * block_create - creates a new block
 * @prev: previous block
 * @data: data for a new block
 * @data_len: length of @data
 * Return: a block or NULL if failed
 */
block_t *block_create(block_t const *prev,
		      int8_t const *data, uint32_t data_len)
{
block_t *block;
time_t t;
int i;
uint32_t max_len = data_len > BLOCKCHAIN_DATA_MAX ?