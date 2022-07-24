#include "hblk_crypto.h"

/**
 * ec_save - save existing EC key pair to disk
 * @key: EC key pair to save
 * @folder: path to folder to save keys
 *
 * Return: 1 on success, 0 on error
 */
int ec_save(EC_KEY *key, char const *folder)
{
	char buf[BUFSIZ];
	FILE *fp;

	if (!key || !folder || strlen(folder) + strlen(PUB_FILENAME) > BUFSIZ)
		return (0);
	mkdir(folder, S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH);
	sprintf(buf, "%s/%s", folder, PUB_FILENAME);
