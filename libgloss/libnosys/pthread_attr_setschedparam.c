#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_attr_setschedparam (pthread_attr_t *__attr,
				    const struct sched_param *__param) {
  return -1;
}
stub_warning(pthread_attr_setschedparam);
