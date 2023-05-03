#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_equal (pthread_t __t1, pthread_t __t2) {
  return -1;
}
stub_warning(pthread_equal);
