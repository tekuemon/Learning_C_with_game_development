#include <stdio.h>
int main(void)
{
  int strength = 100;
  int intelligence = 0;
  printf(" あなたの腕力は %d です。 \n", strength);
  printf(" あなたの知力は %d です。 \n", intelligence);
  if (strength == 0 || intelligence == 0)
    printf(" まだ旅に出る資格はありません。 ");
  else
    printf(" 冒険に出発しましょう! ");
}