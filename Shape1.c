 #include <stdio.h>
 #include<stdlib.h>
 #include <string.h>
 #include <ctype.h>
 #include <math.h>
   int main()
   {
       int a;
       scanf("%d", &a);
       for (int i = a; i >= 1; i--) 
       {
          
           for (int j = 1; j <= i; j++) {
                 printf("*");
           }
           printf("\n");
       }

   return 0;
   }
   