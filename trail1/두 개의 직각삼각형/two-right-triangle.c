#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);


    for (int i = 0; i < n; i++){
        for (int j = 0; j < n * 2 - 2 * i; j++){
            if (j == n-i){
                for (int z = 0; z < i * 2; z++){
                    // if (j > 1){
                    //     break;
                    // }
                    printf(" ");
                }
            }
            printf("*");
        }
        printf("\n");
    }


    return 0;
}