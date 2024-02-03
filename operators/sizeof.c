#include <stdio.h>

int main(void) {

  int x = 0;
  char c = 'C';
  long l = 0L;
  long long ll = 0LL;
  double d = 0.0;
  long double ld = 0.0L;

  printf("Size of int: %zu bytes\n", sizeof(x));
  printf("Size of char: %zu bytes\n", sizeof(c));
  printf("Size of long: %zu bytes\n", sizeof(l));
  printf("Size of long long: %zu bytes\n", sizeof(ll));
  printf("Size of double: %zu bytes\n", sizeof(d));
  printf("Size of long double: %zu bytes\n", sizeof(ld));

  return 0;
}
