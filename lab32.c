#include <stdio.h>
#include <math.h>
int main()
{
    double f, h, x, q;
    int i;
    printf("Vvedute shag -> h:");
    scanf("%lf", &h);
    printf("\tx\t f(x)\n");
    printf("_____________________________\n");
    q = 2.0 / h;
    for (i = 0; i <= q; i++)
    {
        x = i * h;
        if (x >= 0.0 && x <= 1.0)
            f = sqrt(x + 1.0) - sqrt(x) - 0.5;
        else
            f = (exp(- x - (1.0 / x)));
        printf("\tx%6.8lf  f(x)%6.8lf\n", x, f);

    }
    return 0;
}
