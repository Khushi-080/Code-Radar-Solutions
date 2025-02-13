#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x>=65 && x<=90){
        printf("Lowercase");
    }
    else if(x>=97 && x<=122){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
}