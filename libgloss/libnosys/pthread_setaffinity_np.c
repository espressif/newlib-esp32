#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_setaffinity_np (pthread_t __id, size_t __cpusetsize,
				const void *__cpuset) {
  return -1;
}
stub_warning(pthread_setaffinity_np);
