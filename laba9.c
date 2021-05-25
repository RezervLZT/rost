
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "theskyisturningredreturntopower";
    char str1[256];
    char max[256];
    char str2[256];
    int r = 0;
    int g = 1;
    int i, j, k;
    for (i = 0; i < (strlen(str) - 1); i++)
    {
        for (j = 1; j < strlen(str); j++)
        {
            if ((str[i] != str[j]) && (i != j))
                {
                    for (k = i; k < j; k++)
                    {
                        str1[k] = str[j];
                        r = j - i;
                    }
                }
            else if (r > g)
            {
              max[i] = str[i];
              g = r;
            }
        }
    }
    printf("%d\n", g);
    for (i = 0; i < strlen(max); i++)
    printf("%d", max[i]);
}
