/* */
#include <stdio.h>
#include <stdlib.h>

main()
{
  FILE *fp;
  char hinmei[30];
  int tanka, suryo, sum = 0;

  fp = fopen("uriage.txt", "r");
  if(fp == NULL){
    printf("ファイルがオープンできません。\n");
    exit(1);
  }

  while(fscanf(fp, "%s %d %d", hinmei, &tanka, &suryo) != EOF){
    printf("%s %d %d\n", hinmei, tanka, suryo);
    sum += tanka * suryo;
  }
  fclose(fp);

  puts("");
  printf("売り上げ金額は、%d円です。\n", sum);
}

