#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double fr(int n, double sum, int count)
{
    if (n % 10 <= 0)
    {
        sum += n;
        return sum / count;
    }
    sum += n % 10;
    return fr(n /10, sum, count + 1);
}
int main ()
{
    {
        int n;
        double res;
        printf("Введите число\n n ->");
        scanf("%u", &n );
        res = fr(n, 0.0, 0);
        printf("Количество цифр -> %.2f\n", res);
    }
    int k1 = 0, a;
    double s = 0.0;
    printf("Vvedute a po ysloviy \n a ->");
    scanf("%d", &a );
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
    printf("sredniaia -> %.2f\n", s);
    return 0;
}
