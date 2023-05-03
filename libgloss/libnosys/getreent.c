#include <stddef.h>
#include "config.h"
#include "warning.h"

struct _reent *
__attribute__((weak))
__getreent (void)
{
    return NULL;
}

stub_warning(__getreent)
