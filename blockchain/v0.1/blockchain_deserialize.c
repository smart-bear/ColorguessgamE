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
 * @swap_endian: pointer to data to be converted
 * @blockchain: the blockchain that will contain the blockchain
 * @size: the size of the blockchain
 * Return: pointer to deserialized blockchain or null
 */
int read_blocks(FILE *fp, uint8_t swap_endian,
		blockchain_t *blockchain, int size)
{
int i;
block_t *block;
uint32_