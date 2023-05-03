#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_setschedparam (pthread_t __pthread, int __policy,
			       const struct sched_param *__param) {
  return -1;
}
stub_warning(pthread_setschedparam);
