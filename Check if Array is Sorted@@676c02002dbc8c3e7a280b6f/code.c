// Your code here...
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr1[i]);
    }
    int b=1;
    for(int j=0;j<=n-2;j++){
        if(arr1[j]>arr1[j+1]){
            b=0;
            break;
        }
    }
    if(b==1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}