#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int cnt = 0;

    while (n <= 1000){
        if (n % 2 == 0){
            n = (n * 3) + 1;
        }
        else {
            n = (n * 2) + 2;
        }
        cnt++;
    }
    printf("%d", cnt);


    return 0;
}