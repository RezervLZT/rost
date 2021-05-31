#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct mag
{
    int status;
    char name[20];
    char addr[60];
    int discount;
    char discount_name[100];
} magazine;

void init_magazine(int n, magazine *name)
{
  for (int i = 0; i < n; i++)
      name[i].status = 0;
}

void fill(int n, magazine *name)
{
    char v1[20];
    char v2[60];
    char v3[100];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (k != n)
        {
            if (!name[i].status)
            {
                memset(v1, 0, sizeof(v1));
                memset(v2, 0, sizeof(v2));
                memset(v3, 0, sizeof(v3));
                name[i].status = 1;
                printf("Введите название магазина -> ");
                scanf("%s", v1);
                for (int t = 0; t < 20; t++)
                    v1[t] = tolower(v1[t]);
                strcpy(name[i].name, v1);
                printf("Введите адрес магазина -> ");
                scanf("%s", v2);
                for (int t = 0; t < 60; t++)
                    v2[t] = tolower(v2[t]);
                strcpy(name[i].addr, v2);
                printf("Введите процент скидки -> ");
                scanf("%d", &name[i].discount);
                printf("Введите на что распространяется скидка -> ");
                scanf("%s", v3);
                for (int t = 0; t < 100; t++)
                    v3[t] = tolower(v3[t]);
                strcpy(name[i].discount_name, v3);
                break;
            }
            else
                k++;
        }
  }
}

void remove_magazine(int n, magazine *name)
{
    name[n].status = 0;
}

void printstr(int n, magazine *name)
{
    for (int i = 0; i < n; i++)
    {
        if (name[i].status)
        {
            printf("--------------------------------------------------\n");
            printf("Название магазина №%d = %s\n", i, name[i].name);
            printf("Адрес магазина №%d = %s\n", i, name[i].addr);
            printf("Скидка магазина №%d = %d\n", i, name[i].discount);
            printf("Товары со скидкой: %s\n", name[i].discount_name);
        }
    }
}
int check(int n, int i, magazine *name)
{
    char v2[]="одежда";
    if (strpbrk(name[i].discount_name, v2))
        return 1;
    return 0;
}

void maxdisc(int n, magazine *name)
{
    int maxI = 0;
    for (int i = 0; i < n; i++)
        if (check(n, i, name))
            if (name[i].discount > maxI && name[i].status)
                maxI = i;
    printf("------------------------------------\n");
    printf("Наибольшая скидка в магазине: %s\nСкидка составляет: %d\n", name[maxI].name, name[maxI].discount);
}

int main()
{
  int n = 10, l = 0;
  unsigned int k = 5;
  magazine test[n];
  init_magazine(n, test);
  magazine test1 = {1, "Сургут", "Ленина", 9, "одежда, телефоны"};
  test[0] = test1;
  magazine test2 = {1, "Москва", "Краснопольская", 101, "книги"};
  test[1] = test2;
  magazine test3 = {1, "Тверь", "Тульская", 6, "продукты, бакалея"};
  test[2] = test3;
  while(k != 255)
  {
      printf("----------------------\n  Выберите операцию:\n 1:Просмотр всего списка магазинов\n 2:Добавление магазина\n 3:Удаление магазина\n 4:Закрыть программу\n----------------------\n");
      scanf("%d", &k);
      if (k > 4)
          printf("Введена неверная операция!\n");
      else
      {
          switch(k)
          {
              case 1:
                  printstr(n,test);
                  break;
              case 2:
                  fill(n,test);
                  break;
              case 3:
                  printf("Впишите номер удаляемого магазина: \n");
                  scanf("%d", &l);
                  remove_magazine(l,test);
                  break;
              case 4:
                  k = 255;
                  break;
              case 5:
                  maxdisc(n, test);
                  break;
          }
      }
      if (k != 255)
          k = 0;
  }
  return 0;
}
