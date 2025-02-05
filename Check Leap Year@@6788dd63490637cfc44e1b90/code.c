#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if (x%100==0 && x%4==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}