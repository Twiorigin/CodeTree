#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        if (i % 2 != 0){
            printf("*");
        }
        else {
            for (int j = 0; j < i; j++){
                printf("* ");
            }
        }
        printf("\n");


    }

    return 0;
}