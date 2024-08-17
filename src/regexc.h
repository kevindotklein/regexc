#ifndef REGEXC_H
#define REGEXC_H

#include <assert.h>

#define REGEX_FLAGS "gm"

inline static size_t str_len(const char* s) {
  size_t len = 0;
  while(*s++) {
    len++;
  }
  return len;
}

inline static int char_contains(const char c, const char* values) {
  for(int i=0; i<str_len(values); i++) {
    if(c == values[i]) return 1;
  }
  return 0;
}

inline static int is_regex(const char* s) {
  size_t len = str_len(s);
  if(len < 3) return 0;
  if(s[0] != '/') return 0;
  if(char_contains(s[len-1], REGEX_FLAGS)){
    while(--len) {
      if(len-1 != 0 && s[len-1] == '/') {
        return 1;
      }
    }
    return 0;
  }
  if(s[len-1] == '/') return 1;

  return 0;
}

inline static char **regexc_match(const char *regex) {
  if(!is_regex(regex)) {

  }
}

#endif