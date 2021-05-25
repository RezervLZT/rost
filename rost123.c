# include <stdio.h>
# include <math.h>
int main()
{
    int a1, a2, a3, min, max, k, k1;
    float s;
    printf ("Введите a1 ->");
    scanf ("%d", &a1);
    printf ("Введите a2 ->");
    scanf ("%d", &a2);
    printf ("Введите a3 ->");
    scanf ("%d", &a3);
    s = (a1 + a2 + a3);
    min = 10000;
    max = 0;
    if (a1 % 2==0 && a1 > a2 && a1 > a3)
        printf ("Номер параметра 1, число ->%f\n", a1/s);
    else
        if (a2 % 2==0 && a2 > a1 && a2 > a3)
            printf ("Номер параметра 2, число ->%f\n", a2/s); //d0aa2e9bc763e9eefd1be5862b5dcdcaf03e08ac
        else
            if (a3 % 2==0 && a3 > a1 && a3 > a2)
                printf ("Номер параметра 3, число ->%f\n", a3/s);
            else
            {
                if (a1<min)
                {
                    min = a1;
                    k = 1;
                }
                if (a2<min)
                {
                  min = a2;
                  k = 2;
                }
                if (a3<min)
                {
                  min = a3;
                  k = 3;
                }
                if (a1>max)
                {
                  max = a1;
                  k1 = 1;
                }
                if (a2>max)
                {
                  max = a2;
                  k1 = 2;
                }
                if (a3>max)
                {
                  max = a3;
                  k1 = 3;
                }
                printf ("min k -> %d\n", k);
                printf ("max k -> %d\n", k1);
                printf ("raz -> %d\n", max-min);
            }
    return 0;
}
