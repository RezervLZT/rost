#include <stdio.h>
#include <math.h>
int main()
{
    double f, h, x, sum, sum2 = 1, e, del = 0;
	  int i, n = 4;
	  printf("Vvedute tochnost` -> e:\n");
	  scanf ("%le", &e);
	  printf("\tx\t f(x)\n");
	  printf("_____________________________\n");
	  do
	  {
	      for (i = 0; i < n; i++)
	      {
		        h = 0.5 / n;
		        x = (i * h + (h /0.5));
	          if (x >= 0.0 && x <= 0.25)
			          f = exp(sin(x));
		        else
			          f = exp(x) - (1/sqrt(x));
		        sum += f;
	      }
	      printf("kol-vo - > %d\n", n);
	      sum = sum * h;
	      del = fabs(sum2 - sum) / 3.0;
	      sum2 = sum;
	      n = 2 * n;
	      printf("summa -> %.10lf\n", sum);
	      printf("del -> %lf\n", del);
	  }
	  while (del > e);
	  return 0;
}
