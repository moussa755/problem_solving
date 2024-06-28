#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main() {
    int n,num;
    scanf("%d ", &n);
    int even=0, odd=0, positiveand=0, negative=0;
        
    for (int i = 0; i <= n-1; i++) {
    
        scanf("%d", &num);
    
        if (num < 0) {
            negative++;
        }
        else if (num > 0) {
            positiveand++;
        }
        if (num % 2 == 0) {
            even++;
        }
        else odd++;

       

    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positiveand);
    printf("Negative: %d\n", negative);
    
    return 0;
    }
