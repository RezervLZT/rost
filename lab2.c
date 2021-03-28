#include <stdio.h>
#include <math.h>
int main()
{
double x;
printf("Vvedute x -> [-1;1]");
scanf ("%lf", &x);
if (x=>-1.0 && x<=1.0)
{
float y= 1.0\tan(x)+acos(pow(2,x));
double z= sgn(y);
prinf ("y(x)= %lf\n z(y)= %lf\n", y,z);
}
else
prinf ("Zalupka");
return 0;
}
