#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){

        for (int j = 0; j < i ; j++){
            printf("*");
        }
        for (int z = 1; z < i; z++){
                printf("*");
            }
        printf("\n"); 
    }

    return 0;
}