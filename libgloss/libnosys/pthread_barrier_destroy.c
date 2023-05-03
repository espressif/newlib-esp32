#include "config.h"
#include "warning.h"

int
__attribute__((weak))
pthread_barrier_destroy (void *__barrier) {
  return -1;
}
stub_warning(pthread_barrier_destroy);
