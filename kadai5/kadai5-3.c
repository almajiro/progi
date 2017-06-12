#include <stdio.h>

main()
{
  char str2[100], str3[100], *pt1, *pt2;
  int i = 0;

  pt1 = str2;
  pt2 = str3;

  printf("文字列str2を入力 ===> ");
  scanf("%s", pt1);

  printf("***** コピー前 *****\n");
  printf("str2=%s\n", pt1);
  printf("str3=%s\n", pt2);

  while(*(pt1 + i) != '\0'){
    *(pt2 + i) = *(pt1 + i);
    i++;  
  }

  printf("***** コピー後 *****\n");
  printf("str2=%s\n", pt1);
  printf("str3=%s\n", pt2);
}
