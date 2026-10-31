#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);


    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n\n");
    }
    for (int i = 1; i <= n-1; i++){
        for (int j = i; j < n; j++){
            printf("*");
        }
        printf("\n\n");
    }

    return 0;
}