#ifndef HBLK_CRYPTO_H
#define HBLK_CRYPTO_H

#include <openssl/ec.h>
#include <openssl/evp.h>
#include <openssl/pem.h>
#include <openssl/sha.h>
#include <stdint.h>
#include <string.h>
#include <sys/stat.h>

#define PUB_FIL