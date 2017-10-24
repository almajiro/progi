/* kadai11-1.c it 2017/10/24 */
#include <stdio.h>
#include <stdlib.h>

int menu(void);
int get_max_no(void);
void show(void);
void add(void);
void renew(void);
FILE *file_open(char *mode);

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

  printf("名前と点数を出力\n\n");
  fp = file_open("r");

  while(fscanf(fp, "%3d%20s%4d", &data.no, data.namae, &data.tensu) != EOF){
    printf("%d %s %d\n", data.no, data.namae, data.tensu);
    i++;
    fseek(fp, i*28L, SEEK_SET);
  }

  fclose(fp);
}

void add()
{
  struct SEISEKI data;

  printf("氏名と点数を入力: ");
  scanf("%s %d", data.namae, &data.tensu);

  fp = file_open("a+");
  fseek(fp, -28L, SEEK_END);
  if(fscanf(fp, "%3d", &data.no) == EOF){
    data.no = 0;
  }

  fseek(fp, 0L, SEEK_END);
  fprintf(fp, "%3d%20s%4d\n", (data.no + 1), data.namae, data.tensu);
  fclose(fp);

  puts("追加しました。");
}

void renew(void)
{
  struct SEISEKI data;

  printf("何番を更新しますか？ ");
  scanf("%d", &data.no);

  fp = file_open("r");
  fseek(fp, (data.no - 1)*28L, SEEK_SET);
  fscanf(fp, "%3d%20s%4d", &data.no, data.namae, &data.tensu);
  fclose(fp);

  printf("現在のデータは %s %d です。更新データを入力: ", data.namae, data.tensu);
  scanf("%s %d", data.namae, &data.tensu);

  fp = file_open("r+");
  fseek(fp, (data.no - 1)*28L, SEEK_SET);
  fprintf(fp, "%3d%20s%4d\n", data.no, data.namae, data.tensu);
  fclose(fp);

  puts("変更しました。");
}

FILE *file_open(char *mode)
{
  FILE *_fp;
  _fp = fopen("seiseki.txt", mode);
  if(_fp == NULL){
    puts("ファイルがオープンできません。");
    exit(1);
  }

  return _fp;
}
