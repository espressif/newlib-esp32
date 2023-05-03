#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_key_create (pthread_key_t *__key,
			    void (*__destructor)(void *)) {
  return -1;
}
stub_warning(pthread_key_create);
