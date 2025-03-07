// Your code here...
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        
        for(int j=1;j<=i;j++){
            int a=1;
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}