#include <stdio.h>

main()
{
  char str1[100], *pt;
  int i = 0;

  pt = str1;

  printf("文字列str1を入力 ===> ");
  scanf("%s", pt);

  while(*(pt + i) != '\0'){
    i++;
  }

  printf("%sは、%d文字です。\n", pt, i);
}
