// Your code here...
#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if((x+y>=z) || (x+z>=y) || (y+z>=x)){
        printf("Valid");
    }
    else{
        printf("Invalid");
        
    }
    return 0;
}