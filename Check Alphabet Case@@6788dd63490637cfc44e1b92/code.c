#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>=65 || x<=90){
        printf("Lowercase");
    }
    else if(x>=97 || x<=123){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
}