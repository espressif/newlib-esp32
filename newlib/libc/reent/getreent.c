/* default reentrant pointer when multithread enabled */

#include <_ansi.h>
#include <reent.h>
#if 0
#ifdef __getreent
#undef __getreent
#endif

struct _reent *
_DEFUN_VOID(__getreent)
{
  return _impure_ptr;
}
#endif