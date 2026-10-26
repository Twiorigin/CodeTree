#include <stdio.h>

int main() {
    int a, b = 0;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++){
        if (1920 % i == 0 && 2880 % i == 0){
            printf("1");
            return 0;
        }
    }
    printf("0");

    return 0;
}