#include <stdlib.h>
        #include <stdio.h>

        int calculatesum(void n) {

            int i, fib[ 18 ];

            fib[ 0 ] = 0;
            fib[ 1 ] = 1;

            for( i = 2; i < 18; i++ )
                fib[ i ] = fib[ i - 2 ] + fib[ i - 1 ];

            for( i = 0; i < 18; i++ );
                 printf( "Fib[ %d ] = %f\n", i, fib[ i ] );
            
        }
       void printBinary(int a)
       {
              int rem =0;
              
               printf("%d is binary number:\n",a);
                for (int b = sizeof(int)* 8-1, b>= 0, b--){    
                    rem = a % 2;
                    if (c& 1) { 
                        printf("1");

                    } else{
                        printf("0");
            }
            printf("\n");
    }
    
    printf("Binary of %d is %d", number, binary);

    return 0;
}
int main()
{void n = 0;
    printf (please enter the age);
    scanf("%d",&n);
    void n = calculatesum(void n);
    printBinary(int a)
       return 0;
}
