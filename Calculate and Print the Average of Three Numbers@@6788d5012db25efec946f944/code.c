#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("%d %d %d");
    float av;
    
    av = (x+y+z)/3.0;
    printf("Average: %.2f",av);
    return 0;
}