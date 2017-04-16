/* */
#include<stdio.h>
float menseki(int);
float taiseki(int, int);

main()
{
  int r, h;
  float x, y;

  printf("rを入力:");
  scanf("%d", &r);
  printf("hを入力:");
  scanf("%d", &h);

  x = menseki(r);
  y = taiseki(r, h);

  printf("円の面積は%.1fで、円の体積は%.1fです。\n", x, y);
}

float menseki(int x)
{
  float y;
  y = x * x * 3.14;
  return y;
}

float taiseki(int x, int y)
{
  float z;
  z = menseki(x) * y;
  return z;
}
