#include <stdio.h>
float heikin(int *);

main()
{
  int data[5] = {76, 53, 20, 89, 41};
  printf("平均は、%.1fです。\n", heikin(data));
}

/* heikin関数  */
float heikin(int *pt)
{
  int i;
  float s = 0;
 
  for(i=0; i<5; i++){
    s += *(pt + i);
  }

  s = s / 5;
  return s;
}

