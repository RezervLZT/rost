# include <stdio.h>
# include <stdlib.h>
# include <time.h>
void fill ( int n , int a [])
    {
        int i ;
        for ( i = 0; i < n ; i ++)
        {
			printf("a[i] = %d\n", i);
			scanf("%d", &a[i]);
		}
    }
	int main()
	{
	int n;
	int a [i];
	printf("%d", fill(n, A));
	}
// void fill2 ( int n ,int C [] )
//     {
//         int A [ n ], B [ n ], C [ n ];
//         int i ;
//         for ( i = 0; i < n ; i ++)
//         {
//           if (i % 2 == 0)
//               C [ i ] = fill(n, A);
//           else
//                C[ i ] = fill(n, B);
//         }
//     }
// int main ()
//     {
//         srand(time( NULL ));
//         int n ;
//         printf(" n -> ");
//         scanf("%d", &n);
//         int A [ n ], B [ n ], C [ n ];
//         fill(n, A );
//         fill(n, B );
//         int i;
//         printf("Массив А:\n");
//         for ( i = 0; i < n ; i++)
//         printf("%4d" , &A [ i ]);
//         printf("\n");
//         printf("Массив B:\n");
//         for ( i = 0; i < n ; i++)
//         printf("%4d" , &B [ i ]);
//         printf("\n");
//         printf("Массив C:\n");
//         printf("%4d", fill2(n, C));
//         // for ( i = 0; i < n; i++)
//         // {
//         //     if (i % 2 == 0)
//         //         C [ i ] = A [ i ];
//         //     else
//         //         C [ i ] = B [ i ];
//         //     printf("%4d", C [ i ]);
//         // }
//     }
