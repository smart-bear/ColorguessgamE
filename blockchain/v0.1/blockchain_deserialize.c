#include "blockchain.h"

/**
 * convert_endianness - Convert data of a block
 * @block: block to be converted
 */
void convert_endianness(block_t *block)
{
_swap_endian(&block->info.index, sizeof(block->info.index));
_swap_endian(&block->info.dif