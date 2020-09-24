#include <stdio.h>

int mc91(int n){
    if (n < 0) {
        printf("Input correct value");
        exit(0);
    }
    else if (n > 100)
        return n - 10;
    else
        return (mc91(mc91(n + 11)));
}

int main(void){
    printf("%d", mc91(102));
    
    return 0;
}
