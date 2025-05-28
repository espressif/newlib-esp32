#include <reent.h>

__attribute__((weak))
struct _reent *
__getreent (void)
{
    return _GLOBAL_REENT;
}
