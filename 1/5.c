#include <stdio.h>

int fib(int n){
    if (n < 0) {
        printf("Input correct value");
        exit(0);
    }
    else if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}

int main(void){
    // printf("%d", fib(-2));
    printf("%d", fib(4));
    
    return 0;
}
