/* */
#include<stdio.h>
int sum(int, int);

main()
{
  int a, b, ans;
  scanf("%d%d", &a, &b);
  ans = sum(a, b);
  printf("合計は、%dです。\n", ans);
}

/* sum 関数 */
int sum(int x, int y)
{
  int z;
  z = x + y;
  return z;
}

