#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int m, int a[][m])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            a[i][j] = rand() % 11 - 5;
            printf("%6d", a[i][j]);
        }
        printf("\n");
    }
}

void print(int n, int m, int a[][m], int b[][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            b[j][i] = a[i][j];
        }
    }
}

void print2(int n, int m, int b[][n])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%6d", b[i][j]);
        printf("\n");
    }
}

void proizved(int n, int m, int a[][m], int b[][n], int c[n][n])
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            c[i][j] = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k < m; k++)
                c[i][j] += a[i][k] * b[k][j];
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
    int a[n][m], b[m][n], c[n][n];
    printf("matrica #1\n");
    fill(n, m, a);
    print(n, m, a, b);
    printf("transponirovannaya\n");
    print2(n, m, b);
    printf("proizvedenie\n");
    proizved(n, m, a, b, c);
    print2(n, m, c);
    return 0;
}
