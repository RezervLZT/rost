#include <stdio.h>
#include <math.h>
double f(double x)
{
  return (sqrt(x/2+1)+sqrt(x/2)-1/2 );
}
double f1(double x)
{
  return (pow(2.7182,-(x/2)-1/(x/2)));
}
int main()
{
double a, b, h, s;
int n,i;
printf ("Vvedute a ->");
scanf("%lf", &a);
printf ("Vvedute b ->");
scanf ("%lf", &b);
printf ("Vvedute shag n ->");
scanf ("%d", &n);
h=(b-a)/n;
printf ("Nahunaem reshat`\n");
if (a>=0 && b<=1)
{
s=(f(a)+f(b)/2);
for (int i = 1; i<=n; i++);
{
s+=f(a+i*h);
}
double I=s*h;
printf("I=%lf\n", I);
}
else
if (a>1 && b<=2)
{
  s=(f1(a)+f1(b)/2);
  for (int i = 1; i<=n; i++);
  {
  s+=f1(a+i*h);
}
double I=s*h;
printf("I=%lf\n", I);
}

}
