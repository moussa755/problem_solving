 #include <stdio.h>
 #include<stdlib.h>
 #include <string.h>
 #include <ctype.h>
 #include <math.h>
       int main()
       {
           int n;
           scanf("%d", &n);
           for (int i = 1; i <= n; i++) {
               if (n % i == 0) {
                   printf("%d\n", i);
               }

           }


           return 0;
      
       }
   
