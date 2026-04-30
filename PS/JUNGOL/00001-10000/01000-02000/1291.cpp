#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    while (scanf("%d %d", &num1, &num2) != EOF) {
        if ((num1 > 9 || num1 < 2) || (num2 > 9 || num2 < 2)) {
            printf("INPUT ERROR!\n");
            continue;
        }
        
        if (num1 < num2) {
            for (int i = 1; i <= 9; i++) {
                for (int j = num1; j <= num2; j++)
                    printf("%d * %d = %2d   ", j, i, i * j);
                printf("\n");
            }
        }
        else {
            for (int i = 1; i <= 9; i++) {
                for (int j = num1; j >= num2; j--)
                    printf("%d * %d = %2d   ", j, i, i * j);
                printf("\n");
            }
        }
    }

    return 0;
}