#include <stdio.h>
#include <math.h>
unsigned int fr(unsigned int a)
{
	return a? 1 + fr(a / 10 ):0;
}

unsigned int fl1(unsigned int n)
{
    unsigned int k = 0;
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

	unsigned int a;
    printf("Введите число\n n ->");
    scanf("%u", &a );
    printf("Количество цифр -> %u\n", fr(a));
    printf("kol-vo chisel -> %u\n", fl1(a));
    return 0;
}
