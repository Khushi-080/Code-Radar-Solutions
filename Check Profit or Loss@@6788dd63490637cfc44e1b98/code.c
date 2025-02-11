// Your code here...
#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x<=y){
        printf("Profit");
    }
    else if(y=x){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}