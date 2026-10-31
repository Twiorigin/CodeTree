#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++){
            printf("* ");
        }
        for (int z = 1; z < n-i; z++){
            printf("* ");
        }
        printf("\n");
        for (int a = 0; a < i+1; a++){
            printf("  ");
        }
    }



    return 0;
}