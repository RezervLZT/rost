#include <stdio.h>
#include <math.h>
double sgn(double y)
{
  if (y<0)
      return -1;
  if (y>0)
      return 1;
  
      return 0;

}
int main()
{
  double x;
  printf("Vvedute x -> [-2;0]");
  scanf ("%lf", &x);
  if (x>=-2.0 && x<=0.0)
  {
      double  y= (1.0/tan(M_PI*x))+acos(pow(2,x));
      printf ("y(x)= %lf\n z(y)= %lf\n", y, sgn(y));
  }
}
