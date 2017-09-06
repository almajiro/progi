/* kadai8-3.c it28  */
#include <stdio.h>
float *sub(float);

main()
{
  int i;
  float *result, a;

  printf("半径を入力してください==> ");
  scanf("%f", &a);

  result = sub(a);

  printf("直径=%.1f\n", *result);
  printf("円周=%.1f\n", *(result + 1));
  printf("面積=%.1f\n", *(result + 2));
}

float *sub(float n){
  static float ans[3];
  ans[0] = n * 2.0;
  ans[1] = ans[0] * 3.14;
  ans[2] = n * n * 3.14;

  return ans;
}
