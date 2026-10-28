#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for(int z = 0; z < 2; z++){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    }



    return 0;
}