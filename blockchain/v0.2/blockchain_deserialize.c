#include "blockchain.h"

/**
 * convert_endianness - Convert data of a block
 * @block: block to be converted
 */
void convert_endianness(block_t *block)
{
_swap_endian(&block->info.index, sizeof(block->info.index));
_swap_endian(&block->info.difficulty, sizeof(block->info.difficulty));
_swap_endian(&block->info.timestamp, sizeof(block->info.timestamp));
_swap_endian(&block->info.nonce, sizeof(block->info.nonce));
}
/**
 * read_blocks - deserializes blockchain from file
 * @fp: file that contains blockchain data
 * @swap_endian: pointer 