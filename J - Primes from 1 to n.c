 #include <stdio.h>
 #include<stdlib.h>
 #include <string.h>
 #include <ctype.h>
 #include <math.h>
       int main()
       {
           int n, l=0;
           scanf("%d", &n);
           for (int i = 2; i <= n; i++) //10
           {
               int l = 0;
               for (int j = 2; j < i; j++) 
               {

                   if (i % j == 0) 
                   {
                       l = 1;
                       break;
                       
                   }
                  
               }
               if (l == 0) {
                   printf("%d ", i);
               }
             
           }


           return 0;
      
       }
   
