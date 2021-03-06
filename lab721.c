#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int m, int a[][m])
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            a[i][j] = rand() % 11 - 5;
}
void print(int n, int m, int a[][m], int b[][n], int c[n][n])
{
    printf("matrica\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%6d", a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    printf("transponirovannaya\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%6d", b[i][j]);
        printf("\n");
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            c[i][j] = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k < m; k++)
                c[i][j] += a[i][k] * b[k][j];
    printf("proizvedenie\n");
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%6d", c[i][j]);
        printf("\n");
    }
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
    fill(n, m, a);
    print(n, m, a, b, c);
    return 0;
}
