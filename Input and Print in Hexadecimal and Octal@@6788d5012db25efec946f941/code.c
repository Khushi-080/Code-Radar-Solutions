#include <stdio.h>


int main() {
    char x;
    scanf("%c",&x);
    printf("Hexadecimal: %x\n",(unsigned char)x);
    int y;
    scanf("%d",&y);
    printf("Octal: %o",y);
    return 0;
}