#include<stdio.h>
 int main(){
     int n;
     scanf("%d",&n);
     int arr[n],arr1[n];
     for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
     }
     for(int i=n;i<0;i--){
     for(int i=n;i>=0;i--){
         arr1[n-i]=arr[i-1];
     }
     for(int i=0;i<n;i++){
         if(arr[i]==arr1[i]){
             continue;
         }
         else{
             printf("NO");
             return 0;
         }
     }
     printf("YES");
     return 0;