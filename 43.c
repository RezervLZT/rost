#include <stdio.h>
#include <math.h>
int main()
{
double a, b, h, Int, xi, s;
int n, i;
printf ("Vvedute a ->");
scanf("%lf", &a);
printf ("Vvedute b ->");
scanf ("%lf", &b);
printf ("Vvedute shag n ->");
scanf ("%d", &n);
printf ("Nahunaem reshat`\n");
float f, x, h1;
printf ("Vvedute shag -> h:");
scanf ("%f", &h1);
printf ("\tx\t f(x)\n");
printf ("_____________________________\n");
h=(b-a)/n;
for (i=0; i<2.1;i+=h)
{
  xi=a+i*h+h/2;
  if (xi>=0 && xi<=1)
     f=sqrt(xi+1)+sqrt(xi)-1/2;
  if (xi>1 && xi<=2)
     f=pow(2.7182,-xi-1/xi);
  print/f("\tx%6.1f  f(x)%6.3f\n", xi, f);
  s+=f*xi;
  printf ("h=%lf", h);
}
  print/f("s%6.3f\n", s);


}
