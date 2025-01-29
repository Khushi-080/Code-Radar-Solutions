#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    printf("%d",x);
    
    scanf("%d",&y);
    printf("%d",y);
    
    scanf("%d",&z);
    printf("%d",z);
    float av;
    av = (x+y+z)/3.0;
    printf("Average: %.2f",av);
    return 0;
}