/* unlink.c -- remove a file.
 * 
 * Copyright (c) 1995 Cygnus Support
 *
 * The authors hereby grant permission to use, copy, modify, distribute,
 * and license this software and its documentation for any purpose, provided
 * that existing copyright notices are retained in all copies and that this
 * notice is included verbatim in any distributions. No written agreement,
 * license, or royalty fee is required for any of the authorized uses.
 * Modifications to this software may be copyrighted by their authors
 * and need not follow the licensing terms described here, provided that
 * the new terms are clearly indicated on the first page of each file where
 * they apply.
 */
#include <errno.h>
#include "glue.h"

/*
 * unlink -- since we have no file system, 
 *           we just return an error.
 */

#ifndef REENTRANT_SYSCALLS_PROVIDED

int
unlink (char * path)
{
  errno = EIO;
  return (-1);
}

#else /* REENTRANT_SYSCALLS_PROVIDED */

#include <sys/reent.h>

int
_DEFUN (_unlink_r, (ptr, path),
	struct _reent *ptr _AND
        char * path)
{
  ptr->_errno = EIO;
  return -1;
}

#endif /* REENTRANT_SYSCALLS_PROVIDED */
