/* */
#include<stdio.h>
#include<math.h>
double area (double, double, double);

main()
{
  double a, b, c, d, e, f, g, s1, s2, s3, s;

  printf("aを入力:", a);
  scanf("%lf", &a);
  printf("bを入力:", b);
  scanf("%lf", &b);
  printf("cを入力:", c);
  scanf("%lf", &c);
  printf("dを入力:", d);
  scanf("%lf", &d);
  printf("eを入力:", e);
  scanf("%lf", &e);
  printf("fを入力:", f);
  scanf("%lf", &f);
  printf("gを入力:", g);
  scanf("%lf", &g);

  s1 = area(a, b, c);
  s2 = area(b, d, e);
  s3 = area(e, f, g);
  s = s1 + s2 + s3;

  printf("5角形の面積=%.2f\n", s);
}

double area(double x, double y, double z)
{
  double p, s;
  p = ( x + y + z ) / 2;
  s = sqrt( p * (p - x) * (p - y) * (p - z) );
  return s;
}
