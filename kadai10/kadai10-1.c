/* */
#include <stdio.h>
#include <stdlib.h>

main()
{
  FILE *fp;
  char hinmei[31];
  int kosu, i=0;

  fp = fopen("syohin.txt", "w");
  if(fp == NULL){
    printf("ファイルがオープンできません。\n");
    exit(1);
  }

  printf("商品ファイルを作成します。\n");
  printf("商品名 個数\n");

  while(scanf("%s%d", hinmei, &kosu) != EOF){
    fseek(fp, i*47, SEEK_SET);
    i++;
    fprintf(fp, "%4d%31s%10d\n", i, hinmei, kosu);
  }

  printf("\n書き込みが完了しました。\n");

  fclose(fp);
}
