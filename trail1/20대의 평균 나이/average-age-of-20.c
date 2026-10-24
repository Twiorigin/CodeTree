#include <stdio.h>

int main() {
    int n = 0;
    int cnt = 0;
    int count = 0;
    while (1){
        scanf("%d", &n);
        if (n >= 20 && n < 30){
            cnt += n;
            count++;
        }
        else if (n > 29 || n < 20){
            printf("%0.2f", ((float)cnt / count));
            return 0;
        }
    }


    return 0;
}