#include <reent.h>

struct _reent *
__getreent (void)
{
    return _GLOBAL_REENT;
}
