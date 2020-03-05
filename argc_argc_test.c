#include <stdio.h>

/*
 * 05Mar20: With Guru ji's kirpa Harpreet started with C today.
 * https://devcentral.f5.com/s/articles/Hands-on-C-argc-and-argv-from-main-function-explained 
*/

int main(int argc, char * argv[]) {
  printf("argc (number of arguments) = %d: \n", argc);
  for (int i = 0; i < argc; i++) {
    printf("argv (argument passed to your program): %s\n", argv[i]);
  }
}
