/* */
#include<stdio.h>

main()
{
  int graph[5], *pt, i, z;
  pt = graph;

  for(i=0;i<5;i++){
    printf("graph[%d] ===> ", i);
    scanf("%d", (pt + i));
  }

  printf("----- 横棒グラフ -----\n");
  
  for(i=0;i<5;i++){
    printf("%d ", *(pt + i));
    for(z=0;z<*(pt + i);z++){
      printf("*");
    }
    puts("");
  }
}
