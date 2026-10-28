#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for (int z = i; z < n; z++){
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }


    return 0;
}