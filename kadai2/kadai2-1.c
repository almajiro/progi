/* */
#include<stdio.h>

main()
{
  static int a, b, *pt;

  a = 100;
  pt = &a;
  b = *pt;

  printf("aの値=%d\t aのアドレス=%p\n", a, &a);
  printf("bの値=%d\t bのアドレス=%p\n", b, &b);
  printf("ptの値=%p\t ptのアドレス=%p\n", a, &a);

}
