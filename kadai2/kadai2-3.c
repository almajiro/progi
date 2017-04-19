/* */
#include<stdio.h>

main()
{
  int data[10], sum2 = 0, sum5 = 0, other = 0, *pt, i;
  pt = &data[0];

  for(i=0;i<10;i++){
    printf("data[%d]===> ", i+1);
    scanf("%d", (pt + i));
  }

  for(i=0;i<10;i++){
    switch(*(pt + i)){
      case 2:
        sum2++;
        break;
      case 5:
        sum5++;
        break;
      default:
        other++;
        break;
    }
  }
  
  printf("sum2は%d個、sum5は%d個,otherは%d個です。\n", sum2, sum5, other);

}
