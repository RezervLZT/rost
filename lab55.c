#include <stdio.h>
#include <math.h>
unsigned int fr(unsigned int a)
{
    return a? 1 + fr(a / 10 ):0;
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
        unsigned long int k1 = 0, a;
        printf("Vvedute a po ysloviy \n a ->");
        scanf("%lu", &a );
        while (a > 0)
        {
            if (a % 10 >= 0)
                k1 += 1;
            a = a / 10;
        }
        printf("kol-vo chisel -> %lu\n", k1);
        return 0;
    }
