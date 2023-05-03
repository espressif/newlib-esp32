#include "config.h"
#include "warning.h"
#include <pthread.h>

void	_pthread_cleanup_pop_restore (struct _pthread_cleanup_context *_context,
				      int _execute) {
  return;
}
stub_warning(_pthread_cleanup_pop_restore);
