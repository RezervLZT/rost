#include <stdio.h>
#include <math.h>
int main()
{
	double f, h, x, sum, sum2, n = 4, e, n2 = 0, x1, f2;
	int i;
	printf("Vvedute tochnost` -> e:\n");
	scanf ("%le", &e);
	printf("\tx\t f(x)\n");
	printf("_____________________________\n");

	do
	{
	for (i = 1; i <= n; i++)
	{
		h = 2.0 / n;
		x = (i * h - (h /2.0));
		if (x >= 0.0 && x <= 1.0)
			f = sqrt(x + 1.0) - sqrt(x) - 0.5;
		else
			f = (exp(- x - (1.0 / x)));
		sum +=  h * f;
		printf("\tx%.3lf  f(x)%.3lf\n", x, f);
	}
	printf("\tx\t f(x)\n");
	printf("_____________________________\n");
	for (i = 1; i <= (2.0 * n); i++)
	{
		h = 2.0 / ( 2.0 * n );
		x1 = (i * h - (h /2));
		if (x1 >= 0.0 && x1 <= 1.0)
			f2 = sqrt(x1 + 1.0) - sqrt(x1) - 0.5;
		else
			f2 = (exp(- x1 - (1.0 / x1)));
		sum2 += (h * f2);
		printf("\tx%.3lf  f(x)%.3lf\n", x1, f2);
	}
	printf("summa -> %.3lf\n", sum);
	printf("summa2 -> %.3lf\n", sum2);
    n2 = fabs(sum2 - sum) / 3.0 ;
	if (n2 < e)
		return 0;
	else
		n = n * 2.0;
}
while (n2 > e);
printf("n -> %lf\n", n2);
return 0 ;
}
