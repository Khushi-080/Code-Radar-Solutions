// Your code here...
#include <stdio.h>
int main(){
    int a,isprime=1;
    scanf("%d",&a);
    if (a<=1){
        isprime=0;
    }
    else{
        for(int i=2;i*i<=a;i++){
            if (a%i==0){
                isprime=0;
                break;
            }
        }
    }
    if(isprime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
}
}