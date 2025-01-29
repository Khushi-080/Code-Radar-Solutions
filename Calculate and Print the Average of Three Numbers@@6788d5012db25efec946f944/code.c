#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",x);
    int y;
    scanf("%d",&y);
    printf("%d",y);
    int z;
    scanf("%d"&z);
    printf("%d",z);
    float av;
    av = (x+y+z)/3;
   
    
    printf("Average: %.2f",av);
    return 0;
}