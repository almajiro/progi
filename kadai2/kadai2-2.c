/* */
#include<stdio.h>

main()
{
  int data[5] = {5,1,3,2,4}, i, sum = 0, *pt;
  pt = data;

  for(i=0;i<5;i++){
    sum = sum + *pt;
    pt++;
  }

  printf("合計=%d\n", sum);

}
