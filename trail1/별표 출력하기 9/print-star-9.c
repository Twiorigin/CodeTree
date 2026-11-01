#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 1; j < n-i; j++){
            printf("  ");
        }
        for (int z = 0; z < i+1; z++){
            printf("* ");
        }
        for (int q = 0; q < i; q++){
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}