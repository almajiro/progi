/* */
#include <stdio.h>
#include <stdlib.h>

main()
{
  FILE *fp;
  char hinmei[30];
  int tanka, suryo;

  fp = fopen("uriage.txt", "w");
  if(fp == NULL){
    printf("ファイルがオープンできません。\n");
    exit(1);
  }

  while(scanf("%s%d%d", hinmei, &tanka, &suryo) != EOF){
    fprintf(fp, "%s %d %d\n", hinmei, tanka, suryo);
  }

  fclose(fp);

}

