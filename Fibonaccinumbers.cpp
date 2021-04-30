#include <iostream>
int printFibonacciNumbers (int n)
    {   
        int f1=0, f2=1 ,fsum = 0,i;n;
        if (n <= 1);
            return f1;
             fsum = f1 + f2;
             i = fsum; 
        
        while (fsum < n) { 
              f1 = f2;
              f2 = fsum;
              i = i+fsum;
              fsum = f1 + f2;
        }

        return i;
    }   
      
#include <iostream>
int printFibonacciNumbers (int n)
    {   
        int f1=0, f2=1 ,fsum = 0,i;n;
        printf("Enter the number of elements");
          scanf("%d",&n);
        if (n <= 1);
        printf("%d\n", f1,f2);
            return;
          for (i=2; i<=n; i++)
          {   
              fsum = f1+ f2
              f1 = f2;
              f2 = fsum;
          }
          printf(" Sum =%d\n",fsum );
        return f[i]
    }
    
