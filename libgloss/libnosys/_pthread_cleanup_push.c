#include "config.h"
#include "warning.h"
#include <pthread.h>

void	_pthread_cleanup_push (struct _pthread_cleanup_context *_context,
			       void (*_routine)(void *), void *_arg) {
  return;
}
stub_warning(_pthread_cleanup_push);
