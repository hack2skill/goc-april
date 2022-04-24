#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int count = 0;
    bool valid = true;
    while(valid) {
        valid = false;
        for(int x = 1; x < N; x++) {
            if(N % x == 0) {
                N = N - x;
                count++;
                valid = true;
                break;
            }
        }
    }
    printf("%d", (count % 2 == 1));
}
