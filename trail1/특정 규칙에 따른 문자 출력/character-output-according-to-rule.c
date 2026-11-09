#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int count = 2 * (n-1);
    for (int i = 0; i < n; i++){
        for (int z = 0; z < 2 * (n-i) - 2; z++){
            printf(" ");
        }
        count = count - 2;
        for (int j = i; j < i * 2 + 1; j++){
            printf("@");
            printf(" ");
        }
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--){
        for (int j = i; j > 0; j--){
            printf("@ ");
        }
        printf("\n");
    }


    return 0;
}