 #include <stdio.h>
 #include<stdlib.h>
 #include <string.h>
 #include <ctype.h>
 #include <math.h>
   int main()
   {
      long long n, m;
      
      while (scanf("%lld %lld", &n, &m) && n>0 && m>0 )
      {
        
        
       if  (n > m)
       {
           
           long long t = 0;
           for(long long i=m ;i<=n;i++)
           {
               
                t = t + i;
               printf("%lld ", i);
           }
           printf("sum =%lld ", t);
       }
       else if (n<m)
       {
           int d = 0;
           for (long long j = n; j <= m; j++)
           {
               
               d = d + j;
               printf("%lld ", j);
           }
           printf("sum =%lld ", d);
       }
        printf("\n");
      } 

   return 0;
   }
   