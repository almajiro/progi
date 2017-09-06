/* kadai8-2.c it28  */
#include <stdio.h>

main()
{
  int m;
  char *month[12] = {
                      "January", "Febuary", "March", "April",
                      "May", "June", "July", "August", "September",
                      "October", "November", "December"
                    };

  do{
    printf("1〜12の数字を入力してください: ");
    scanf("%d", &m);
  }while( m<1 || m>12 );

  printf("%d月は英語で%sです。\n", m, month[m-1]);
}
