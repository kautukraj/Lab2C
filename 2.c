#include <stdio.h>

int main()
{

        int n,i,j,num=0;
        int zero=0;
        scanf("%d", &n);
if (n<=1)
{
    printf("%d", zero);
}

      else
      {


        int prime[n+1];
        for (i = 2; i <= n; i++)
            prime[i] = 1;

        for (i = 2; i<= n; i++)
            {
            if (prime[i]==1)
              {
                for (j = 2; i*j <= n; j++)
                    prime[i*j] = 0;

              }
            }

        for (i = 2; i <= n; i++)
            if (prime[i]==1)
                num++;


       printf("%d\n", num);


      }
 return 0;
}
