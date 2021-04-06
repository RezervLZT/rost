#include <stdio.h>
#include <math.h>
int main()
{
    float f, h, i, x;
    printf("Vvedute shag -> h:");
    scanf("%f", &h);
    printf("\tx\t f(x)\n");
    printf("_____________________________\n");
    for (i = 0; i < 2.0; i += h)
    {
        if (x >= 0 && x <= 1)
            f = (sqrt(x + 1) - sqrt(x) - (1 / 2));
        if (x > 1 && x < 2.0)
            f = (exp(- x - (1 / x)));
        printf("\tx%6.8f  f(x)%6.8f\n", x, f);
        x += h;
    }
    return 0;
}
