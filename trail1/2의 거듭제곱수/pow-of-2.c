#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);


    for (int i = 1; i < n; i++){
        int cnt = 1;
        for (int j = 0; j < i; j++){
            cnt = cnt * 2;
        }
        if (cnt == n){
            printf("%d", i);
            return 0;
        }
    }



    return 0;
}