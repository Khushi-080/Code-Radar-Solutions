// Your code here...
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int a=1;
    for(int i=1;i<=x;i++){
        
        for(int j=1;j<=2*i-1;j+2){
            printf("*");

        }
        
        printf("\n");
    }
    return 0;
}