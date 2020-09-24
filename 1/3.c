#include <stdio.h>

int function2(int n){
    if (n < 1) {
        printf("Input correct value");
        exit(0);
    }
    else if (n == 1)
        return 3;
    else
        return (3 * function2(n - 1));
}

int main(void){
    printf("%d", function2(1));
    // printf("%d", function2(3));
    
    return 0;
}
