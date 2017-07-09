#include <stdio.h>

struct seiseki{
  char name[20];
  int kokugo;
  int sugaku;
  int eigo;
};

main(){
  struct seiseki it2801 = {"almajiro", 28, 65, 82};
  int goukei;
  goukei = it2801.kokugo + it2801.sugaku + it2801.eigo;
  printf("%sさんの合計は%d点です。\n", it2801.name, goukei);
}
