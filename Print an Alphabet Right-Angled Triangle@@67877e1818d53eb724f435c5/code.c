// Your code here...
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    
    for(int i=1;i<=x;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            char ch=(a+64);
            printf("%c",&ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}