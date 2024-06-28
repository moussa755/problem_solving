 #include <stdio.h>
 #include<stdlib.h>
 #include <string.h>
 #include <ctype.h>
 #include <math.h>
       int main()
       {
           int n;
           int f;
           scanf("%d", &n);

           for (int i = 2; i < n; i++) {
                 
               if (n % i == 0) {
                   printf("NO\n");
                   return 0;
               }
           }
           printf("YES\n");
         
           return 0;
      
       }
   
