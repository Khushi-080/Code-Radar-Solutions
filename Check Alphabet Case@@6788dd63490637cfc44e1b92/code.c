#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>=65 || x<=97){
        printf("Uppercase");
    }
    else if(x>=97 || x<=123){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}