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


#define GENESIS_BLOCK { \
{ /* info */ \
0 /* index */, \
0, /* difficulty */ \
1537578000, /* timestamp */ \
0, /* nonce */ \
{0} /* prev_hash */ \
}, \
{ /* data */ \
"Holberton School", /* buffer */ \
16 /* len */ \
}, \
"\xc5\x2c\x26\xc8\xb5\x46\x16\x39\x63\x5d\x8e\xdf\x2a\x97\xd4\x8d" \
"\x0c\x8e\x00\x