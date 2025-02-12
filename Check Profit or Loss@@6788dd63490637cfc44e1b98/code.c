// Your code here...
#include<stdio.h>
int main(){
    int cp,sp;
    
    scanf("%d %d",&cp,&sp);
    if(cp<sp){
        printf("Profit");
    }
    else if(cp>sp){
        printf("Loss");
    }
    else{
        printf("No Profit or Loss");
    }
    return 0;
}