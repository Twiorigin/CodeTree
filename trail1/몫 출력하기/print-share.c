#include <stdio.h>

int main() {
    int n = 0;
    int count = 1;
    while (1){
        scanf("%d", &n);

        if (n % 2 != 0){

        }
        else if (n % 2 == 0){
            if (count > 3){
                break;
            }
            printf("%d\n", n / 2);
            count++;
        }

    }

    return 0;
}