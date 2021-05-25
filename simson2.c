#include <stdio.h>
#include <math.h>

double F (double x)
{
    double f;
    //f = 114.53 + (103.39 / x);
    f = 6.75 * (x * x * x) - 17.99 * (x * x) - 175.28 * x + 241.55;
    //f = 44.58 * x + 54.87;
    //f = (2.27 * (x * x)) + 40.05 * x + 12.71;
    return f;
}

int main ()
{
    double S = 0, x, a, b, h;
    a = -6;
    b = 8;
    h = 1.4;
    x = a + h;
    while (x <= b)
    {
        S = S + 4*F(x);
        x = x + h;
        if (x >= b) break;
        S = S + 2*F(x);
        x = x + h;
    }
    S = (h/3)*(S + F(a) + F(b));
    printf ("Integral = %.3f\n", S);
    return 0;
}
