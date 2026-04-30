#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    
    if (num1 < num2) {
        for (int i = num1; i <= num2; i++) {
            for (int j = 1; j <= 9; j++) {
                printf("%d * %d = %2d   ", i, j, i * j);
                if (j % 3 == 0)
                    printf("\n");
            }
            printf("\n");
        }
    }
    else {
        for (int i = num1; i >= num2; i--) {
            for (int j = 1; j <= 9; j++) {
                printf("%d * %d = %2d   ", i, j, i * j);
                if (j % 3 == 0)
                    printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}