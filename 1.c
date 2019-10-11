        /* to find the GCD of two numbers */
        #include <stdio.h>
        // Using recursion
        int gcd ( int a, int b)
        {
               if(b!=0)
                       return gcd(b,a%b);
               else
                       return a;
        }
        int main()
        {


        int a,b;
        scanf ("%d %d", &a, &b);
        a = abs(a); b = abs(b);

        printf("%d",gcd(a,b));
         return 0;

        }
