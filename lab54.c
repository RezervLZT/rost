#include <stdio.h>
#include <math.h>
int main ()
{
    unsigned long int k1 = 0, a;
    printf("Vvedute a po ysloviy \n a ->");
    scanf("%lu", &a );
    while (a>0)
    {
        if (a % 10 >= 0)
        k1 +=1;
        a = a / 10;
    }
    printf ("kol-vo chisel -> %lu\n", k1);
    return 0;
}
