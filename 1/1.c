#include <stdio.h>

int factorial(int n){
    if (n < 1) {
        printf("Input correct value");
        exit(0);
    }
    else if (n == 1)
        return 1;
    else
        return (n * factorial(n - 1));
}

int main(void){
    printf("%d", factorial(4));
    
    return 0;
}
