#include "hblk_crypto.h"

uint8_t *ec_to_pub(EC_KEY const *key,
uint8_t pub[EC_PUB_LEN])
{
const EC_GROUP *grp = NULL;

const EC_POINT *pnt = NULL;

if (key == NULL || pub == NULL)
return (NULL);
pnt = EC_KEY_get0_public_key(key);

if (pnt == NULL)
ret