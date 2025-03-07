// Your code here...
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x-1;i++){
        for(int j=1;j<=x/2+1;j++){
            printf("*");
        }
        printf("\n");
    }
}