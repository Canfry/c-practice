#include <stdio.h>

int main(void) {
  double width = 12.5;
  double height = 8.9;
  double perimeter = (width + height) * 2.0;
  double area = width * height;

  printf("Width = %.2lf\nHeight = %.2lf\nPerimeter of the rectangle = %.2lf "
         "inches and the area of the rectangle = %.2lf\n",
         width, height, perimeter, area);

  return 0;
}
