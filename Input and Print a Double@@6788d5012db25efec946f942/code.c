#include <stdio.h>

int main() {
    char welcome[2222222];
    scanf("%s",&welcome);

    printf("You entered: %.4s", welcome);
    return 0;
}