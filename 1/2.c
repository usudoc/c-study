#include <stdio.h>

int function1(int n){
    if (n < 1) {
        printf("Input correct value");
        exit(0);
    }
    else if (n == 1)
        return 2;
    else
        return (function1(n - 1) + 3);
}

int main(void){
    // printf("%d", function1(1));
    printf("%d", function1(3));
    
    return 0;
}
