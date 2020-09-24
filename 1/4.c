#include <stdio.h>

int function3(int n){
    if (n < 1) {
        printf("Input correct value");
        exit(0);
    }
    else if (n == 1)
        return 1;
    else
        return (5 * function3(n - 1) - 2);
}

int main(void){
    // printf("%d", function3(1));
    printf("%d", function3(3));
    
    return 0;
}
