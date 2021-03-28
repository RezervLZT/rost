#include <stdio.h>
#include <math.h>
int main()
{
  double x,z;
  printf("Vvedute x -> [-3;0]");
  scanf ("%lf", &x);
  if (x>=-3.0 && x<=0.0)
  {
    double  y= (1.0/tan(x))+acos(pow(2,x));
    if (y<0) z=-1;
    if (y==0) z=0;
    if (y>0) z=1;
    printf ("y(x)= %lf\n z(y)= %lf\n", y,z);
  }
  else
    printf ("Zalupka\n");
  return 0;
}
