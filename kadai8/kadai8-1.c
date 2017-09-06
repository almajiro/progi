/* kadai8-1.c it28  */
#include <stdio.h>
int *jizyou(int);

main()
{
  int num, i, *pt;

  printf("値を入力してください: ");
  scanf("%d", &num);

  pt = jizyou(num);

  for(i=1;i<5;i++){
    printf("%dの%d乗は%d\n", num, i+1, *(pt+i));
  }
}

/* jizyou関数 */
int *jizyou(int n)
{
  static int j, ans[5] = {1,0,0,0,0};
  for(j=1;j<5;j++)
    ans[j] = ans[j-1] * n;
  
  return ans;
}
