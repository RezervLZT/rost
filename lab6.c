#include <stdio.h>
#include <math.h>

int suml (int a, int b)
{
  for (int i = 1; i <= b; i++)
    a++;
  return a;
}

int sumr (int a, int b)
{
  return b ? sumr(++a, --b): a;
}

int main ()
{
  int x, y;
  printf ("Vvedite x-> ");
  scanf("%d", &x);
  printf ("Vvedite y-> ");
  scanf("%d", &y);
  printf("Circle = %d\n", suml(x, y));
  printf("Recursion = %d\n", sumr(x, y));
}
