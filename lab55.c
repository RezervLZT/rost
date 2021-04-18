#include <stdio.h>
#include <math.h>
unsigned int fr(unsigned int n)
{
unsigned k;
if (fr(n) % 10 >= 0)
k +=1;
fr(n / 10);
return 1;
}
int main ()
{
unsigned int n;
printf("Введите число\n n ->");
scanf("%u", &n );
printf ("Количество цифр -> %u\n", fr(n));
return 0;
}
