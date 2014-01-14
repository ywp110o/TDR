#ifndef _H_TLIBC_WRITER
#define _H_TLIBC_WRITER

#include "platform/tlibc_platform.h"

#include "generator.h"

typedef struct _TLIBC_WRITER_GENERATOR TLIBC_WRITER_GENERATOR;
struct _TLIBC_WRITER_GENERATOR
{
	GENERATOR super;
};

#define TLIBC_WRITER_SUFFIX "_writer.c"

void tlibc_writer_generator_init(TLIBC_WRITER_GENERATOR *self);

#endif//_H_TLIBC_WRITER