#include <stdio.h>

struct seiseki{
  char name[20];
  int kokugo;
  int sugaku;
  int eigo;
  int goukei;
  float heikin;
}

main()
{
  struct seiseki it2801;

  printf("名前: ");
  scanf("%s", &it2801.name);

  printf("国語: ");
  scanf("%d", &it2801.kokugo);

  printf("数学: ");
  scanf("%d", &it2801.sugaku);

  printf("英語: ");
  scanf("%d", &it2801.eigo);

  it2801.goukei = it2801.kokugo + it2801.sugaku + it2801.eigo;
  it2801.heikin = (float)it2801.goukei / 3.0;

  printf("合計は%d点で、平均は%.1f点です。\n", it2801.goukei, it2801.heikin);
}

