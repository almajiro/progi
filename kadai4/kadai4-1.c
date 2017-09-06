#include <stdio.h>
int goukei(int *);
main()
{
  int data[5] = {2,4,5,1,3}, sum;
  sum = goukei(data);
  printf("合計は%dです。\n", sum);
}

/* goukei関数 */
int goukei(int *pt)
{
  int i, s = 0;
  for(i=0; i<=4; i++){
    s = s + *pt;
    pt++;
  }
  return s;
}
