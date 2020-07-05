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
0, /* nonce */