// Your code here...
#include<stdio.h>
int isPrime(int num){
    if(num<=1){
        return 0;
    }
    int summ =0;
    for(int i = 2; i < num;i++){
        if(num%i == 0){
            summ += 1;
        }

    }
    if(summ == 0){
        return '1';
    }
    else{
        return '0';
    }
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}