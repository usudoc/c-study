#include <stdio.h>

// from - 移動元
// work - 作業用
// dest - 移動先
int hanoi(int n, char *from, char *work, char *dest){
    if (n >= 2)
        hanoi(n - 1, from, dest, work);
    
    printf("%s -> %s\n", from, dest);
    
    if (n >= 2)
        hanoi(n - 1, work, from, dest);
}

int main(void){
    int n;
    printf("Input a positive number: ");
    scanf("%d", &n);
    hanoi(n, "A", "B", "C");
    
    return 0;
}
