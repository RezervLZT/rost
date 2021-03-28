#include <stdio.h>
#include <math.h>
int main()
{
double a, b, Int, s, s2;
int n;
printf ("Vvedute a ->");
scanf("%lf", &a);
printf ("Vvedute b ->");
scanf ("%lf", &b);
printf ("Vvedute shag n ->");
scanf ("%d", &n);
printf ("Nahunaem reshat`\n");
float f, f1, x, hag, xi, i, h, h2, xi2;
h=(b-a)/n;
printf("h=%f\n", h);
printf ("\tx\t f(x)\n");
printf ("_____________________________\n");
for (i=1; i<=n;i++)
{
xi=a+i*h-h/2;//vzialu 0
  if (xi>=0 && xi<1.1)
  {
     f=sqrt(xi+1)-sqrt(xi)-1/2;
   s+=f*h;
 }
  if (xi>1 && xi<2.1)
     {
       f=pow(2.7182,-xi-1/xi);
     s+=f*h;
   }

  printf("\tx%6.1f  f(x)%6.1f\n", xi, f);
}
  printf("s%6.2f\n", s);
  h2=(b-a)/(n*2);
  printf("h2=%f\n", h2);
  for (i=1; i<=n*2;i++)
  {
  xi2=a+i*h2-h2/2;//vzialu 0
    if (xi2>=0 && xi2<=1)
    {
       f1=sqrt(xi2+1)-sqrt(xi2)-1/2;
     s2+=f1*h2;
   }
    if (xi2>1 && xi2<=2)
       {
         f1=pow(2.7182,-xi2-1/xi2);
       s2+=f1*h2;
     }

    printf("\tx%6.1f  f(x)%6.1f\n", xi2, f1);
  }
    printf("s2%6.2f\n", s2);

}
