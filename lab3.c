#include <stdio.h>
#include <math.h>
int main()
{
  float f, x, h;
  printf ("Vvedute shag -> h:");
  scanf ("%f", &h);
  printf ("\tx\t f(x)\n");
  printf ("_____________________________\n");
  do {
    if (x>=0 && x<=1)
      f=sqrt(x+1)+sqrt(x)-1/2;
    if (x>1 && x<=2)
      f=pow(2.7182,-x-1/x);
    printf("\tx%6.1f  f(x)%6.3f\n", x, f);
    x+=h;
     }
  while (x>=0 && x<2.1);
  return 0;
}
