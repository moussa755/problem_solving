 #include <stdio.h>
 #include<stdlib.h>
 #include <string.h>
 #include <ctype.h>
 #include <math.h>
       int main()
       {
           int a, b, c = 0;
           scanf("%d %d", &a, &b);

           for (int i = a; i <= b; i++) {
               int lucky = 1; // Assume the number is lucky initially
               int x = i;

               while (x > 0) {
                   int digit = x % 10;
                   if (digit != 4 && digit != 7) {
                       lucky = 0; // Not a lucky number
                       break; // No need to check further
                   }
                   x = x / 10;
               }

               if (lucky == 1) {
                   printf("%d ", i);
                   c++;
               }
           }

           if (c == 0) {
               printf("-1");
           }

           return 0;
       }
   