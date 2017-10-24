/* */
#include<stdio.h>
#include<stdlib.h>

int menu(void);
void show(void);
void add(void);
void renew(void);

FILE *fp;
struct SEISEKI{
  int no;
  char namae[20];
  int tensu;
};


int main(void)
{
  int ans;

  do{
    ans = menu();

    switch(ans){
      case 1:
        show();
        break;
      case 2:
        add();
        break;
      case 3:
        renew();
        break;
      case 9:
        puts("プログラムを終了します。");
        break;
    }
  }while(ans != 9);

  return 0;
}

int menu(void)
{
  int num;
  puts("***** メニュー *****");
  puts("1: 一覧表示");
  puts("2: 追加");
  puts("3: 更新");
  puts("9: 終了");
  printf("番号を入力: ");
  scanf("%d", &num);

  return num;
}

void show(void)
{
  int i = 0;
  struct SEISEKI data;

  printf("\n名前と点数を出力\n");
  fp = fopen("seiseki.txt", "r");
  if(fp == NULL){
    puts("ファイルがオープンできません。");
    exit(1);
  }

  while(fscanf(fp, "%3d%20s%3d", &data.no, data.namae, &data.tensu) != EOF){
    printf("%d %s %d\n", data.no, data.namae, data.tensu);
    i++;
    fseek(fp, i*28L, SEEK_SET);
  }

  fclose(fp);
  puts("");
}

void add()
{
  int i = 1;
  struct SEISEKI data;
  struct SEISEKI temp;

  printf("氏名と点数を入力: ");
  scanf("%s %d", data.namae, &data.tensu);

  fp = fopen("seiseki.txt", "a");
  if(fp == NULL){
    puts("ファイルがオープンできません。");
    exit(1);
  }

  while(fscanf(fp, "%3d%20s%3d", &temp.no, temp.namae, &temp.tensu) != EOF){
    fseek(fp, i*28L, SEEK_SET);
    i++;
  }

  fprintf(fp, "%3d%20s%3d\n", i, data.namae, data.tensu);

  fclose(fp);
  puts("追加しました");
}

void renew(void)
{
  int id;

  printf("何番を更新しますか？ ");
  scanf("%d", &id);

  fp = fopen("seiseki.txt", "w");

  fclose(fp);
}
