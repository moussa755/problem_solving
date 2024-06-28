 #include <stdio.h>
 #include<stdlib.h>
 #include <string.h>
 #include <ctype.h>
 #include <math.h>
       int main()
       {
           int a, b;
           int r = 0;
           scanf("%d %d", &a, &b);
           int f = 2 * b;
           int l = 2 * a;
           if (a == f)
           {
               printf("%d", b);
           }
           else if (b == l)
           {
               printf("%d", a);
           }
           else 
           {
               if (a < b)
               {
                   for (int i = 1; i <= a; i++) //12 8

                   {
                       if (a % i == 0 && b % i == 0) {
                           r = i;
                       }

                   }
               }
               else
               {
                   for (int i = 1; i <= b; i++) //12 8

                   {
                       if (b % i == 0 && a % i == 0) {
                           r = i;
                       }

                   }
               }
               printf("%d", r);

           }
           return 0;
      
       }

anther solve//
 #include <stdio.h>
 #include<stdlib.h>
 #include <string.h>
 #include <ctype.h>
 #include <math.h>
       int main()
       {
           int a, b;
           int r = 0;
           scanf("%d %d", &a, &b);
           int f = 2 * b;
           int l = 2 * a;
           if (a == f)
           {
               printf("%d", b);
           }
           else if (b == l)
           {
               printf("%d", a);
           }
           else 
           {
               int smaller = a < b ? a : b;
               for (int i = 1; i <= smaller; i++) 
               {
               if (a%i==0&&b%i==0)
               {
                   r = i;
               }
               
               }
               printf("%d", r);
           }
           return 0;
      
       }

