#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int z = 0; z < n - i-1; z++){
            printf(" ");
        }
        for (int j = i; j < 1 + (3*i); j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < n - 1; i++){
        for (int z = 0; z < i+1; z++){
            printf(" ");
        }
        for (int j = i; j < n + (n-3) - i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}