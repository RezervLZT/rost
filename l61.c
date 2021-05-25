#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 10;
}

void print(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        printf("%4d ", a[i]);
    printf("\n");
}

void search(int n, int a[])
{
    int i, j, sum, pro;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                printf("1 = %d\n2 = %d\n", a[i], a[j]);
                sum = a[i] + a[j];
                pro = a[i] * a[j];
                printf("Sum = %d\n", sum);
                printf("Pro = %d\n", pro);
                a[i] = sum;
                a[j] = pro;
                return;
            }
        }
    }
}

int main()
{
    srand(time(NULL));
    int n;
    printf("n -> ");
    scanf("%d", &n);
    int mas[n];
    fill(n, mas);
    print(n, mas);
    search(n, mas);
    print(n, mas);
    return 0;
}
