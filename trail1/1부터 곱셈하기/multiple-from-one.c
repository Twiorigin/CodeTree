#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int cnt = 1;

    for (int i = 1; i <= 10; i++){
        cnt *= i;
        if (cnt >= n){
            printf("%d", i);
            return 0;
        }
    }


    return 0;
}