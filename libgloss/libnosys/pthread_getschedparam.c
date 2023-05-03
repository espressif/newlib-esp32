#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_getschedparam (pthread_t __pthread, int *__policy,
			       struct sched_param *__param) {
  return -1;
}
stub_warning(pthread_getschedparam);
