#include <stdio.h>

int main() {
    int n = 0;

    while (1){
        scanf("%d", &n);
        if (n > 25){
            printf("Lower\n");
        }
        else if (n < 25){
            printf("Higher\n");
        }
        else if (n == 25){
            printf("Good\n");
            break;
        }
    }

    return 0;
}