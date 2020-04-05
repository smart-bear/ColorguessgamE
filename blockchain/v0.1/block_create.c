#include "blockchain.h"
#include <time.h>
/**
 * block_create - creates a new block
 * @prev: previous block
 * @data: data for a new block
 * @data_len: length of @data
 * Return: a block or NULL if fa