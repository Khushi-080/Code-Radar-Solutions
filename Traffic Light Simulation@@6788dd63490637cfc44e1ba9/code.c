// Your code here...
#include<stdio.h>
int main(){
    char x;
    scanf("%s",&x);
    if(x=="R"){
        printf("Stop");
    }
    else if(x=="G"){
        printf("Go");
    }
    else if(x=="Y"){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
}