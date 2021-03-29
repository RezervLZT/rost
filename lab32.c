#include <stdio.h>
#include <math.h>
int main()
{
  float f, h, i;
  printf ("Vvedute shag -> h:");
  scanf ("%f", &h);
  printf ("\tx\t f(x)\n");
  printf ("_____________________________\n");
  for (i=0.0; i<=2.0;i+=h)
  {
    if (i>=0.0 && i<=1.0)
       f=(sqrt(i+1)-sqrt(i)-1/2);
       else
    if (i>1.0 && i<=2.0)
       f=(exp(-i-1/i));
  printf("\tx%6.1f  f(x)%6.3f\n", i, f);
  }
}
