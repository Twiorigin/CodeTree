#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);



    for (int i = 0; i < n; i++){
        for (int k = 0; k < i; k++){
            printf("  ");
        }
        for (int j = 0; j < (n + (n-1)) - (i * 2) ; j++){
            printf("* ");
        }
        printf("\n");
    }

    for (int z = 1; z <= n-1; z++){
        for (int a = 0; a < (n-1) - z; a++){
            printf("  ");
        }
        for (int b = 0; b < (n - (n-1)) + (z * 2) ; b++){
            printf("* ");
        }
        printf("\n");
    }

    

    return 0;
}