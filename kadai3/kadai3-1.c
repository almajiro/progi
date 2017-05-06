/* */
#include<stdio.h>

main()
{
  int data[10], *pt, i = 0;
  pt = data;

  do{
    scanf("%d", (pt + i));
    if(*(pt + i) < 0){
      break;
    }
    i++;
  }while(i < 10);

  printf("逆順に出力します。\n");

  for(i--; i>=0; i--){
    printf("%d\n", *(pt + i));
  }

}
