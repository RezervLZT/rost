#include <stdio.h>
#include <math.h>
unsigned int fr( unsigned int n )
{
    return n ? fr(n - 1) * n : 1;
}
unsigned int fl2(unsigned int n)
{
  unsigned int i , res = 1, k1 = 0;
  for ( i = 2; i <= n ; i ++)
      res *= i;
}
unsigned int fl1(unsigned int n)
{
    printf("Factorial of n \n n ->");
    scanf("%u", &n );
    unsigned int k = 0;
    n = n ? fr(n - 1) * n : 1;
    while (n>0)
    {
        if (n % 10 >= 0)
        {
          k +=1;
          n = n / 10;
        }
    }
    return k;
}

int main ()
{
    unsigned int n;
    printf("Factorial of n \n n ->");
    scanf("%u", &n );
    printf("Cycle : n ! = %u\n", fl( n ) );
    unsigned int a = fl(n);
    printf("a-> %u\n", a);
    //"Recursion : n ! = %u\n", fr( n ) );
    printf ("kol-vo chisel -> %u\n", fl1(n));
    printf ("kol-vo chisel2 -> %u\n", fl(n));
    return 0;
}
