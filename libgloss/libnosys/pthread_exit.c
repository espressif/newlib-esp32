#include "config.h"
#include "warning.h"
#include <pthread.h>

void
__attribute__((weak))
pthread_exit (void *__value_ptr) {
    while(1) ;
}
stub_warning(pthread_exit);
