// Your code here...
#include<stdio.h>
int main(){
    int cp,sp;
    
    scanf("%d %d",&cp,&sp);
    if(cp<sp){
        printf("profit");
    }
    else if(cp=sp){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}