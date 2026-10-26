#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for(int i = 2; i < n; i++){
        if (n % i == 0){
            printf("C");
            return 0;
        }
    }
    printf("N");


    return 0;
}