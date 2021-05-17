#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
	{
		printf("a[i] = %d\n", i);
		scanf("%d", &a[i]);
	}
}
void fill2(int n, int b[])
{
    int j;
    for (j = 0; j < n; j++)
	{
		printf("b[j] = %d\n", j);
		scanf("%d", &b[j]);
	}
}

void print(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
    printf("%4d ", a[i]);
    printf("\n");
}
void print1(int n, int b[])
{
	int j;
	for (j = 0; j < n; j++)
    printf("%4d ", b[j]);
    printf("\n");
}

int search(int n, int a[])
{
    int i, j, l, k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
			k += 1;
            {
                printf("1 = %d\n2 = %d\n", a[i], a[j]);
				for (l = 0; l < k; l++)
				a[l] = a[i];
                printf("new massiv%4d ", a[l]);
			    printf("\n");
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    srand(time(NULL));
    int n;
    printf("n -> ");
    scanf("%d", &n);
    int mas[n];
	int A[], B[];
    fill(n, mas);
	fill2(n, mas);
    print(n, a);
	print1(n, b);
    search(n, mas);


    return 0;
}


// Нужно ввести только раззмер массива(n), потом выводится сам массив, потом сумма двух одинаковых чисел и их произведение
// в конце выводится массив с заменёнными числами(вообщем как и просит задание)
// Команда для компилирования gcc l6.c -Wall -o l6
