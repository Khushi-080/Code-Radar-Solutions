#include <stdio.h>
 int main() {
     int n;
     scanf("%d",&n);
     if(n==2){
             printf("Prime");
             return 0;
         }
     for(int i=2;i<n;i++){
         if(n%i==0){
             printf("Not Prime");
             break;
         }
         else{
             printf("Prime");
             break;
             return 0;
         }
         
     }
     printf("Prime");
     return 0;
 }