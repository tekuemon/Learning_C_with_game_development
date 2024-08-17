#include <stdio.h>

int rect_area(int w, int h)
{
  int a = w * h;
  return a;
}

int main(void)
{
  int a = rect_area(200, 120);
  printf(" 幅 200、高さ 120 の領土を手に入れた。 \n");
  printf(" その領土の面積は %d である。\n", a);
}