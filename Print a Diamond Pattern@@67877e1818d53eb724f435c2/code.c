// Your code here...
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
            
        }
        else{
            nsp++;
            nst-=2;

        }
        printf("\n");
    }
}