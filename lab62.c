# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void zapolnenie(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand() %100;
}
void search3(int n,int k, int a[],int c[],int b[])
{
    int i;
	if(k==1){
   		for (i = 0; i < n; i++)
    	{
			if(c[a[i]]==0){
				c[a[i]]=1;
			}
		}
	}
	else if(k==2){
   		for (i = 0; i < n; i++)
    	{
			if(c[b[i]]==1){
				c[b[i]]=2;
			}
		}
	}
	if(k<3) search3(n,k+1,a,c,b);
}
void print(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
		printf("%d ", a[i]);
    printf("\n");
}

void printc(int n, int c[])
{
    int i;
    for (i = 0; i < n; i++)
		if(c[i]==2) printf("%d ", i);
}
int main (){
srand(time(NULL));
int n, k=1, h=100;
printf("Массив: n->");
scanf("%d",&n);
int a[n],b[n],c[h];
zapolnenie(n,a);
zapolnenie(n,b);
print(n,a);
print(n,b);
search3(n,k,a,c,b);
printf("3 массив = ");
printc(h,c);
printf("\n");
}
