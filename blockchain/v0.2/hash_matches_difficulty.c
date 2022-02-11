#include<stdio.h>
#include "blockchain.h"



int hash_matches_difficulty(uint8_t const hash[SHA256_DIGEST_LENGTH],
uint32_t difficu