#ifndef _ENDIANNESS_H_
# define _ENDIANNESS_H_

# include <stdint.h>
# include <stddef.h>

/*
 * # include <stdint.h>
 *
 * # define SWAPENDIAN_16(value)	(((value & 0xFF00) >> 8) | \
 *				((value & 0x00FF) << 8