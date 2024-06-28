#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 12; i++) {
        int r = n * i;
       printf("%d * %d = %d\n",n,i,r);
       
      }
    
        
   
    return 0;
    }
