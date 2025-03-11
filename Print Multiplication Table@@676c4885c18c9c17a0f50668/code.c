// Your code here...
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=10;j++){
            printf("%d" "X" "%d" "=" "%d",x,j,x*j);
        }
        printf("\n");
    }
}