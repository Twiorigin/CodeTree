#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0 + i; j < n; j++){
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - (n-2) + i ; j++){
            printf("* ");
        }
        printf("\n");
    }



    return 0;
}