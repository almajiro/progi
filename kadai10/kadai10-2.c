/* */
#include <stdio.h>
#include <stdlib.h>

main()
{
  FILE *fp;
  char hinmei[31];
  int kosu, num;

  fp = fopen("syohin.txt", "r");
  if(fp == NULL){
    printf("ファイルがオープンできません。\n");
    exit(1);
  }

  printf("***** 商品ファイル *****\n");

  while(fscanf(fp, "%4d%31s%10d", &num, hinmei, &kosu) != EOF){
    fseek(fp, num*47, SEEK_SET);
    printf("%d %s\n", num, hinmei);
  }

  fclose(fp);

  printf("\n出力したいレコード番号を入力: ");
  scanf("%d", &num);

  fp = fopen("syohin.txt", "r");
  if(fp == NULL){
    printf("ファイルがオープンできません。\n");
    exit(1);
  }

  fseek(fp, (num - 1)*47, SEEK_SET);
  if(fscanf(fp, "%4d%31s%10d\n", &num, hinmei, &kosu) != EOF){
    printf("%s\n", hinmei);
  }
  else{
    printf("該当するレコードが見つかりませんでした。\n");
  }

  fclose(fp);
}
