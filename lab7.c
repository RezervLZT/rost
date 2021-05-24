#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int m, int a[][m])
{
    int i,j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            a[i][j] = rand() % 10;
}

void print(int n, int m, int a[][m])
{
    int i,j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
}

int main ()
{
srand(time(NULL));
int n, m;
printf("Vvedute n -> ");
scanf("%d", &n);
printf("Vvedute m -> ");
scanf("%d", &m);
int mas[n][m];
fill(n, m, mas);
print(n, m, mas);
return 0;
}
