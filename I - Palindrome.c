       #include <stdio.h>
 #include<stdlib.h>
 #include <string.h>
 #include <ctype.h>
 #include <math.h>
       int main()
       {
           int n,tmp,rev=0;
           scanf("%d", &n);//23234
           tmp = n;
           while (n)//23234 
           {
               rev = rev * 10 + n % 10;
               n = n / 10;
           }
           printf("%d\n", rev);
           if (tmp == rev) {
               printf("YES");
           }
           else
               printf("NO");

           return 0;
      
       }
   
