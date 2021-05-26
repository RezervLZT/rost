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
            b[i*m+j] = a[i*m+j];
        }
    }
}

void print2(int n, int m, int b[])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%6d", b[j*m+i]);
        printf("\n");
    }
}

void proizved(int n, int m, int a[], int b[], int c[n])
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            c[i*n+j] = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k < m; k++)
                //c[i*n+j] += a[i*m+k] * b[k*n+j];
                  c[i * n + j] += a[i * m + k] * b[k * n + j];
}

int main()
{
    //srand(time(NULL));
    int n, m;
    printf("n -> ");
    scanf("%d", &n);
    printf("m -> ");
    scanf("%d", &m);
    printf("\n");
    //int a[n], b[m], c[n];
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
    printf("matrica #1\n");
    fill(n, m, a);
    print(n, m, a, b);
    printf("transponirovannaya\n");
    print2(n, m, b);
    printf("proizvedenie\n");
    proizved(n, m, a, b, c);
    print2(n, n, c);
    free (a);
    free (b);
    free (c);
    return 0;
}
