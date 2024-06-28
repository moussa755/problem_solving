 #include <stdio.h>
 #include<stdlib.h>
 #include <string.h>
 #include <ctype.h>
 #include <math.h>
   int main()
   {
       int a,n;
       char s;
       scanf("%c", &s);
       scanf("%d ", &a );

       for (int i = 1; i <= a; i++) 
       {
           scanf("%d", &n);
           for (int j=1;j<=n;j++)
           {
               printf("%c", s);
           }
           printf("\n");
       }

   return 0;
   }
   