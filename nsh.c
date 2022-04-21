/*
The NutShell
From https://www.netfunny.com/rhf/jokes/90q1/progs.18.html
*/

#include <unistd.h>
#include <stdio.h>
#include "ncstr.h"

int run (char * cmd);

int main(int argc, char *argv[]) {
  /* Pointer to cmd array */
  char *cmd;
  /* Loop */
  while (1 == 1) {
    printf("NSH> ");
    cmd = ncugets();
    run(cmd);
  }
}

/* Working */
int run (char * cmd) {
  char wdir[80];
  if (*cmd == 'c') {
    /* Skip the cd part */
    if (chdir(cmd + 3) != 0) {
      printf("Error: couldn't change dir\n");
      return -1;
    }
    /* Print working directory */
    getcwd(wdir, sizeof(wdir));
    printf("In dir %s\n", wdir);
  } else if (*cmd == 'e') {
    /* Pointers are fun! */
    printf("%s\n", cmd + 5);
  } else {
    printf("Not implemented, is bloat\n");
  }
  return 1;
}
