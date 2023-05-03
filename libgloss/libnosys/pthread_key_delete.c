#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_key_delete (pthread_key_t __key) {
  return -1;
}
stub_warning(pthread_key_delete);
