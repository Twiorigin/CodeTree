#include <stdio.h>

int main() {
    int n = 0; 
    int count = 0;
    scanf("%d", &n);

    while (n != 1){
        if (n % 2 == 0){
            n /= 2;
            count++;
        }
        else if (n % 2 != 0){
            n = (n * 3) + 1;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}