#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv, char **envp) {
  printf("Hello, mlibc :3\n");
  printf("argc=%d\n", argc);
  for (int i = 0; i < argc; i++) {
    printf("argv[%d]=%s\n", i, argv[i]);
  }
  for (int i = 0; envp[i] != NULL; i++) {
    printf("envp[%d]=%s\n", i, envp[i]);
  }
  char *cwd = getcwd(NULL, 0);
  printf("cwd=%s\n", cwd);
  free(cwd);
  return 0;
}
