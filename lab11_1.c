#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct stu
{
    int status;
    char Familia[20];
    char Name[20];
    char Gruppa[20];
    char Ocenka[6];
    char Sred[6];
} stud;

void sozdanue_students(int n, stud *Familia)
{
  for (int i = 0; i < n; i++)
      Familia[i].status = 0;
}

void fill(int n, stud *Familia)
{
    char v1[20];
    char v2[20];
    char v3[20];
    char v4[6];
    char v5[6];
    //char v5[5];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (k != n)
        {
            if (!Familia[i].status)
            {
                memset(v1, 0, sizeof(v1));
                memset(v2, 0, sizeof(v2));
                memset(v3, 0, sizeof(v3));
                memset(v4, 0, sizeof(v4));
                //memset(v5, 0, sizeof(v5));
                Familia[i].status = 1;
                printf("Введите фамилию студента -> ");
                scanf("%s", v1);
                for (int t = 0; t < 20; t++)
                    v1[t] = tolower(v1[t]);
                strcpy(Familia[i].Familia, v1);
                printf("Введите имя студента -> ");
                scanf("%s", v2);
                for (int t = 0; t < 20; t++)
                    v2[t] = tolower(v2[t]);
                strcpy(Familia[i].Name, v2);
                printf("Введите номер группы -> ");
                scanf("%s", v3);
                for (int t = 0; t < 20; t++)
                    v3[t] = tolower(v3[t]);
                strcpy(Familia[i].Gruppa, v3);
                printf("Введите оценки -> ");
                scanf("%s", v4);
                for (int t = 0; t < 6; t++)
                    v4[t] = tolower(v4[t]);
                strcpy(Familia[i].Ocenka, v4);
                printf("Введите средний балл -> ");
                scanf("%s", v5);
                for (int t = 0; t < 6; t++)
                    v5[t] = tolower(v5[t]);
                strcpy(Familia[i].Sred, v5);
                // scanf("%s", v5);
                // for (int t = 0; t < 5; t++)
                //     v5[t] = tolower(v5[t]);
                // strcpy(Familia[i].Sred, v5);
                break;
            }
            else
                k++;
        }
  }
}

void remove_stud(int n, stud *Familia)
{
    Familia[n].status = 0;
}

void printstr(int n, stud *Familia)
{
    for (int i = 0; i < n; i++)
    {
        if (Familia[i].status)
        {
            printf("--------------------------------------------------\n");
            printf("Фамилия студента: №%d = %s\n", i, Familia[i].Familia);
            printf("Имя студента: №%d = %s\n", i, Familia[i].Name);
            printf("Номер группы: №%d = %s\n", i, Familia[i].Gruppa);
            printf("Оценки: %s\n", Familia[i].Ocenka);
            printf("Средний балл: %s\n", Familia[i].Sred);

        }
    }
}

// int check(int n, int i, stud *Familia)
// {
//     if (name[i].Sred > 4.5)
//           printf("------------------------------------\n");
//           printf("Наибольшая скидка в магазине
// }

int main()
{
  int n = 10, l = 0;
  unsigned int k = 5;
  stud test[n];
  sozdanue_students(n, test);
  stud test1 = {1, "Сазиков", "Ростислав", "№606", "545", "4.6"};
  test[0] = test1;
  stud test2 = {1, "Сазиков2", "Ростислав2", "№607", "445", "4.3"};
  test[1] = test2;
  stud test3 = {1, "Сазиков3", "Ростислав3", "№608", "345", "4"};
  test[2] = test3;
  while(k != 255)
  {
      printf("----------------------\n  Выберите операцию:\n 1:Просмотр всего списка студентов\n 2:Добавление студента\n 3:Удаление студента\n 4:Закрыть программу\n----------------------\n");
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
                  printf("Впишите номер удаляемого студента: \n");
                  scanf("%d", &l);
                  remove_stud(l,test);
                  break;
              case 4:
                  k = 255;
                  break;
              // case 5:
              //     maxdisc(n, test);
                  break;
          }
      }
      if (k != 255)
          k = 0;
  }
  return 0;
}
