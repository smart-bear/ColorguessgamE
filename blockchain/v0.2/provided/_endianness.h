#ifndef _ENDIANNESS_H_
# define _ENDIANNESS_H_

# include <stdint.h>
# include <stddef.h>

/*
 * # include <stdint.h>
 *
 * # define SWAPENDIAN_16(value)	(((value & 0xFF00) >> 8) | \
 *				((value & 0x00FF) << 8))
 *
 * # define SWAPENDIAN_32(value)	(((value & 0xFF000000ul) >> 24) | \
 *				((value & 0x00FF0000ul) >>  8) | \
 *				((value & 0x0000FF00ul) <<  8) | \
 *				((value & 0x000000FFul) << 24))
 *