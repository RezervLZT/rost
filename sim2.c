#include <stdio.h>
#include <math.h>
//#include <conio.h>

#define N 10000

double F (double x)
{
    int i
    for ( i = 0; i < 11 ; i ++)
    a [ i ] = [-554, -255, 313, 399, -100, 399, 374, 134, -750, -651, 1785]; // впихнуть массив в цикл 
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
        for ( i = 0; i < n ; i ++)
        {
        S = S + 4*F(x);
        x = x + h;
        //проверяем не вышло ли значение x за пределы полуинтервала [a, b)
        if (x >= b) break;
        S = S + 2*F(x);
        x = x + h;
    }
    S = (h/3)*(S + F(a) + F(b));
    printf ("Integral = %f", S);
    //_getch ();
    return 0;
}
