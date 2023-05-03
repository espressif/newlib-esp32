#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_condattr_setclock (pthread_condattr_t *__attr,
				   clockid_t __clock_id) {
  return -1;
}
stub_warning(pthread_condattr_setclock);
