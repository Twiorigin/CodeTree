#include <stdio.h>

int main() {
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);


    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}