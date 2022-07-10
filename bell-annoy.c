#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Just include this with a script to run it at startup */

void main () {
  while (1 == 1) {
    /* rand()'s RAND_MAX is implementation-specific, but at least 32767 */
    sleep(rand());
    putchar('\a');
  }
}

