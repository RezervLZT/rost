#include <stdio.h>
#include <math.h>
unsigned int fr(unsigned int a)
{
  //unsigned long int k;
    if (a > 100)
    return 1 + (fr(a / 10)) / (fr(a % 10));
    //s += fr(a % 10);
        //k1 += fr(a / 10);}
    else
        return 0;
}
int main ()
    {
        {
            unsigned int a;
            printf("Введите число\n n ->");
            scanf("%u", &a );
            printf("Количество цифр -> %u\n", fr(a));
        }
        unsigned long int s = 0, k1 = 0, a;
        printf("Vvedute a po ysloviy \n a ->");
        scanf("%lu", &a );
        while (a > 0)
        {
            if (a % 10 >= 0)
                {
                    k1 += 1;
                    s += a % 10;
                }
            a = a / 10;

        }
        s = s / k1;
        printf("sredniaia -> %lu\n", s);
        return 0;
    }
