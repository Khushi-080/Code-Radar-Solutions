// Your code here...
#include<stdio.h>
int main(){
    int x,y,x;
    scanf("%d %d %d",&x,&y,&z);
    if(x=y=z){
        printf("Equilateral");
    }
    else if(x=y!=z || x=z!=y){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}