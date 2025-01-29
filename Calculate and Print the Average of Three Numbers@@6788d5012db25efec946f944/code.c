#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    printf("%d");
    
    scanf("%d",&y);
    printf("%d");
    
    scanf("%d",&z);
    printf("%d");
    float av;
    av = (x+y+z)/3.0;
    printf("Average: %.2f",av);
    return 0;
}