#include <stdio.h>
#include <math.h>
int main()
{
double a, b, h, Int;
int n;
printf ("Vvedute a ->");
scanf("%lf", &a);
printf ("Vvedute b ->");
scanf ("%lf", &b);
printf ("Vvedute shag n ->");
scanf ("%d", &n);
h=(b-a)/n;
printf ("Nahunaem reshat`\n");
float f, x, h1;
printf ("Vvedute shag -> h:");
scanf ("%f", &h1);
printf ("\tx\t f(x)\n");
printf ("_____________________________\n");
do {
  if (x>=0 && x<1.1)
    f=sqrt(x/2+1)+sqrt(x/2)-1/2;
  if (x>1 && x<=2)
    f=pow(2.7182,-(x/2)-1/(x/2));
  printf("\tx%6.1f  f(x)%6.3f\n", x, f);
  x+=h1;
Int+= f*h;
   }
while (x>=0 && x<2.1);
printf ("integral %lf\n", Int);
return 0;

}
