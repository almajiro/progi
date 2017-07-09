#include <stdio.h>

main()
{
  struct birthday{
    char name[20];
    int mm;
    int dd;
  };

  struct birthday it28[5] = {
                        { "aoki", 6, 5},
                        { "aoki", 6, 5},
                        { "aoki", 6, 5},
                        { "aoki", 6, 5},
                        { "aoki", 6, 5}
                   };

  int i;

  for(i=0;i<5;i++){
    printf("%s君の誕生日は%d月%d日です。\n", it28[i].name, it28[i].mm, it28[i].dd);
  }

}

