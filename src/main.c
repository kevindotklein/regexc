#include <stdio.h>

#include "./regexc.h"

int main(void) {

  char* a = "/test/g";
  printf("%d\n", (int)str_len(a));
  printf("%d\n", is_regex(a));

  return 0;
}