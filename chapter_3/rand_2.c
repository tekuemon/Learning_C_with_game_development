#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
  srand((unsigned int)time(NULL));
  for (int i = 0; i < 5; i++)
  {
    int r = rand();
    printf("敵に %d のダメージを与えた!\n", r);
  }
}