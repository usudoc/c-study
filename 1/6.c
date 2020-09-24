#include <stdio.h>

int combi(int n, int r){
    if (n < 0 || r < 0) {
        printf("Input correct value");
        exit(0);
    }
    else if (n < r)
        return 0;
    else if (r == 0 || n == r)
        return 1;
    else if (r == 1 && n >= 1)
        return n;
    else
        return (combi(n - 1, r - 1) + combi(n - 1, r));
}

int main(void){
    printf("%d", combi(5, 3));
    
    return 0;
}
