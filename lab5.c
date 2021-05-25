# include <stdio.h>
# include <math.h>
unsigned int fr( unsigned int n )
{
return n ? fr( n - 1) * n : 1;
}
unsigned int fl( unsigned int n )
{
unsigned int i , res = 1;
for ( i = 2; i <= n ; i ++)
res *= i ;
return res ;
}
unsigned int fr1( unsigned int k )
{
unsigned int n;
return
{
  return n ? fr1( n - 1) * n : 1;
  k += 1;
}
}
int main ()
{
unsigned int k1 = 0;
unsigned int k=0;
unsigned int n;
printf("Factorial of n \n n ->");
scanf("%u", &n );
printf("kol-vo chisel 2 -> %u\n", fr1(k));
printf("Cycle : n ! = %u\n", fl( n ) );
unsigned int a = fl(n);
printf("a-> %u\n", a);                  //"Recursion : n ! = %u\n", fr( n ) );
while (a>0)
{
  if (a % 10 >= 0)
k1 +=1;
a = a / 10;
}
printf ("kol-vo chisel -> %u\n", k1);
return 0;
}
