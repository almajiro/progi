#include <stdio.h>
void saidai(int *, int *);

main()
{
  int data[10] = {20, 43, 99, 81, 52,14, 2, 35, 67, 76}, max = 0, i, *pt;
  pt = data;

  saidai(data, &max);

  printf("配列data=");
  for(i=0;i<10;i++){
    printf("%d ", *(pt + i));
  }
  puts("");

  printf("最大値=%d\n", max);
}

/* saidai関数  */
void saidai(int *pt, int *max)
{
  int i;
  for(i=0;i<10;i++){
    if(*(pt + i) > *max){
      *max = *(pt + i);
    }
  }
}
