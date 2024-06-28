    #include <stdio.h>
    #include<stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <math.h>
       int main()
       {
           int n,f;
           scanf("%d", &n);
           for (int i = 0; i < n; i++)
           {
               scanf("%d", &f);
               long long r = 1; //focus here
               for (int j = 1; j <= f; j++) 
               {
              
                   r*= j;
               
               }
               printf("%lld\n", r);
           }
           return 0;
      
       }
   
