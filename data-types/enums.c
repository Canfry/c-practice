#include <stdio.h>

int main(void) {

  enum compagnies { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };

  enum compagnies xerox = XEROX;
  enum compagnies google = GOOGLE;
  enum compagnies ebay = EBAY;

  printf("%d\n%d\n%d\n", xerox, google, ebay);
}
