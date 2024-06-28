#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main() {
    int n,mx=-1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        if (x > mx) {
            mx = x;
      }
    
       
    }
    printf("%d", mx);
    return 0;
    }
