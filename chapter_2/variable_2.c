#include <stdio.h>
int main(void)
{
  int life = 100;
  printf("体力 (life) の初期値は %d\n", life);
  life = life + 50;
  printf("回復役を飲み体力が 50 増え、 %d になった。\n", life);
  life = life - 70;
  printf("敵の攻撃で体力が 70 減り、 %d になった。\n", life);
  life = life * 3;
  printf("魔法を使って体力を 3 倍し、 %d になった。\n", life);
  life = life / 2;
  printf("敵の攻撃で体力が半分の、 %d になった。\n", life);
}