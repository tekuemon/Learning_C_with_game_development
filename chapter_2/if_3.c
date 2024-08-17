#include <stdio.h>
int main(void)
{
  int gold = -1000;
  printf(" あなたの所持金は %d ゴールド。 \n", gold);
  if (gold > 0)
    printf(" 次の町でアイテムを買いましょう。 ");
  else if(gold < 0)
    printf(" 借金をしているので、町で働きましょう。 ");
  else
    printf(" 所持金ゼロは心もとないです。 ");
}