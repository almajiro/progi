#include <stdio.h>

main()
{
    char str[100], *pt;
    pt = str;

    printf("文字列を入力: ");
    scanf("%s", pt);

    while(*pt != '\0'){
      printf("%c\n", *pt);
      pt++;
    }

    printf("\n");
}
