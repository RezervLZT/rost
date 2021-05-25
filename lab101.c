#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int m, int a[])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            a[i*m+j] = rand() % 11 - 5;
            printf("%6d", a[i*m+j]);
        }
        printf("\n");
    }
}

void print(int n, int m, int a[], int b[])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            b[i*n+j] = a[i*m+j];
        }
    }
}

void print2(int n, int m, int b[])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%6d", b[j*n+i]);
        printf("\n");
    }
}
void print1(int n, int m, int c[])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%6d", c[j*n+i]);
        printf("\n");
    }
}

void proizved(int n, int m, int a[], int b[], int c[])
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            c[i*n+j] = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k < m; k++)
                c[i*n+j] += a[i*n+k] * b[k*m+j];
}


int main()
{
    srand(time(NULL));
    int n, m;
    printf("n -> ");
    scanf("%d", &n);
    printf("m -> ");
    scanf("%d", &m);
    printf("\n");

    int *a = (int*) malloc(n * m * sizeof(int));
    if (!a)
    {
        printf("Memory allocation error !\n");
        exit(EXIT_FAILURE);
    }

    int *b = (int*) malloc(m * n * sizeof(int));
    if (!b)
    {
        printf("Memory allocation error !\n");
        exit(EXIT_FAILURE);
    }
    int *c = (int*) malloc(n * n * sizeof(int));
    if (!c)
    {
        printf("Memory allocation error !\n");
        exit(EXIT_FAILURE);
    }

    printf("c1 %p", c);
    printf("matrica #1\n");
    fill(n, m, a);
    print(n, m, a, b);
    printf("c2 %p", c);
    printf("transponirovannaya\n");
    print2(n, m, b);
    printf("c3 %p\n", c);
    proizved(n, m, a, b, c);
    printf("proizvedenie\n");
    printf("c5 %p\n", c);
    print1(n, n, c);
    printf("c6 %p\n", c);
    free (a);
    free (b);
    free (c);
    return 0;
}
