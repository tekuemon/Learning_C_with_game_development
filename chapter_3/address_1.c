#include <stdio.h>
int main(void)
{
  int i = 0;
  char c = 'A';
  printf("変数 i の値は %d、アドレスは%p\n", i, &i);
  printf("変数 c の値は %c、アドレスは%p\n", c, &c);
}