#include <stdio.h>

main()
{
  struct etohandan{
    int num;
    char eto[20];
  };

  struct etohandan year[12] = {
                                { 1, "申" },
                                { 2, "酉" },
                                { 3, "戌" },
                                { 4, "亥" },
                                { 5, "子" },
                                { 6, "丑" },
                                { 7, "寅" },
                                { 8, "卯" },
                                { 9, "辰" },
                                { 10, "巳" },
                                { 11, "午" },
                                { 12, "未" },
                 };

  int input, eto;

  printf("西暦年を入力 ===> ");
  scanf("%d", &input);

  eto = input % 12;
  printf("%d年は%s年です。\n", input, year[eto].eto);

}
