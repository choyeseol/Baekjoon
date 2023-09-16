#include <stdio.h>

int main() {
    int n, result=0;
    int a[10];
    int i, j;
    
    for(i=0; i<10; i++) {
        scanf("%d", &n);
        a[i] = (n % 42);
    }
    
    for(i=0; i<10; i++) {
        int count=0;
        for(j=i+1; j<10; j++)
            if(a[i] == a[j]) 
                count++;

        if (count == 0) 
            result++;
    }
    
   printf("%d", result);
}