        /* to find the GCD of two numbers */
        #include <stdio.h>
        #include <stdlib.h>
        int main()
        {


        int a,b,max,min;
        scanf ("%d %d", &a, &b);
        a = abs(a); b = abs(b);
        int t;

        if (a>b)
            {max=a;min=b;}
        else
            {max=b;min=a;}

        if (a==0 && b==0)
        printf("Invalid input");

       else
        {
         while (min !=0)
         {

             t = max % min;
             max = min;
             min = t;
         }

         printf ("%d", max);
        }
         return 0;

        }
