
#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#pragma once

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <llist.h>
#include <openssl/sha.h>
#include "../../crypto/hblk_crypto.h"

#define BLOCKCHAIN_DATA_MAX 1024
#define UNUSED(x) (void)(x)
#define BLOCK_GENERATION_INTERVAL						\
	1

#define DIFFICULTY_ADJUSTMENT_INTERVAL						\
	5


#define GENESIS_BLOCK { \
{ /* info */ \
0 /* index */, \
0, /* difficulty */ \
1537578000, /* timestamp */ \
0, /* nonce */ \
{0} /* prev_hash */ \