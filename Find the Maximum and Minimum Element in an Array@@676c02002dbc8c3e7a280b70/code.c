// Your code here...
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr1[i]);
    }
    int a=arr1[0],b=arr1[0];
    for(int i=1;i<=n-1;i++){
        if(b<arr1[i]){
            b=arr1[i];
        }
        if(a>arr1[i]){
            a=arr1[i];
        }
    }
    printf("%d %d",a,b);
    return 0;
}