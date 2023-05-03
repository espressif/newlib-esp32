#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_cond_init (pthread_cond_t *__cond,
			   const pthread_condattr_t *__attr) {
  return -1;
}
stub_warning(pthread_cond_init);
