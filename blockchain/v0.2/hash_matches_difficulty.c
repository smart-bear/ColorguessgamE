#include<stdio.h>
#include "blockchain.h"



int hash_matches_difficulty(uint8_t const hash[SHA256_DIGEST_LENGTH],
uint32_t difficulty)
{
int i = 0, bit = 0, one_found = 0, copy_difficulty = 0;

copy_difficulty = difficulty;
for (i = 0; i < SHA256_DIGEST_LENGTH; i++)
{
for (bit = 7; bit >= 