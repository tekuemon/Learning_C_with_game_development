#include <stdio.h>
int main(void)
{
  int i = 0;
  int* p = &i;
  printf("i の初期値は %d、p の値は %p\n", i, p);
  *p = 777;
  printf("*p=777 とすると、 i の値は %d になる ", i);
}