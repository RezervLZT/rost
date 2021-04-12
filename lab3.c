#include <stdio.h>
#include <math.h>
int main()
{
    double f, x, h, q;
    int s = 0;
    printf("Vvedute shag -> h:");
    scanf("%lf", &h);
    printf("\tx\t f(x)\n");
    printf("_____________________________\n");
    q = 2.0 / h;
    do
    {
        x = s * h;
        if (x >= 0.0 && x <= 1.0)
            f = sqrt(x + 1.0) + sqrt(x) - 0.5;
        else
            f = (exp(- x - (1.0 / x)));
        printf("\tx%.8lf f(x)%.8lf\n", x, f);
        s++;
    }
    while (s <= q);
    return 0;
}
