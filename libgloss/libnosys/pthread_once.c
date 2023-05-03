#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_once (pthread_once_t *__once_control,
		      void (*__init_routine)(void)) {
  return -1;
}
stub_warning(pthread_once);
