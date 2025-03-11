// Your code here...
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    
    for(int i=1;i<=x;i++){
        for(int k=1;k<=x-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");

        }
        
        printf("\n");
    }
    return 0;
}