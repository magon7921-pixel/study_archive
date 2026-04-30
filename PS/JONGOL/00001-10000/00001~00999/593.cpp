#include <stdio.h>

int main() {
    int i;
    
    while(1) {
        printf("ASCII code =? ");
        scanf("%d", &i);

        if (i < 33 || i > 127)
            break;

        printf("%c\n", i);
    }
}