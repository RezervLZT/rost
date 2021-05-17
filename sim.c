#include <stdio.h>
#include <math.h>
int main()
{
    double f, h, x, sum, sum2 = 1, e, del = 0;
	  int i;
	  printf("Vvedute tochnost` -> e:\n");
	  scanf ("%le", &e);
	  printf("\tx\t f(x)\n");
	  printf("_____________________________\n");
	  do
	  {
	      for (i = 0; i < n; i++)
	      {
		        h = 1.4;
		        x = (i * h + (h /2.0));
	          if (x >= 0.0 && x <= 1.0)
			          f = (2.27 * (x * x)) + 40.05 * x + 12.71;
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
