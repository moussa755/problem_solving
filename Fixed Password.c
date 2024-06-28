#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main() {
    int x ;
    int y = 5;
   while(1){
    scanf("%d", &x);
    if (x == 1999) {
        printf("Correct\n");
        break;
    }
    else
        printf("Wrong\n");
    }
   
   
    return 0;
    }
