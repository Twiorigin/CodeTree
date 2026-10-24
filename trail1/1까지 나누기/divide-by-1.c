#include <stdio.h>

int main() {
    int n = 0;
    int cnt = 1;
    int count = 0;


    scanf("%d", &n);

    cnt = n;

    for (int i = 1; i <= n; i++){
        cnt /= i;
        count++;
        if (cnt <= 1){
            printf("%d", count);
            return 0;
        }
    }


    return 0;
}