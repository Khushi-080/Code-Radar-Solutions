#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    printf("%d",x);
    scanf("%d",&y);
    printf("%d",y);
    scanf("%d"&z);
    printf("%d",z);
    int av;
    av = (x+y+z)/3;
    printf("Average: %d",av);
    return 0;
}