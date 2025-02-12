// Your code here...
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>=18 || x==0 && x==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}