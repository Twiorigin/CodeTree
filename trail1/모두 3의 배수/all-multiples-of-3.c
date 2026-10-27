#include <stdio.h>

int main() {
    int n = 0;
    int cnt = 0;
    for (int i = 0; i < 5; i++){
        scanf("%d", &n);
        if (n % 3 == 0){
            cnt++;
        }        
    }

    if (cnt == 5){
        printf("1");
    }
    else{
        printf("0");
    }


    return 0;
}