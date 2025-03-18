// Your code here...
#include <stdio.h>
int main() {
    int n;
    int found;
    found = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1]){
        printf("%d",arr[0]);
        found=1;
    }
    for(int j=1;j<=n-2;j++){
        if(arr[j]>arr[j-1] && arr[j]>arr[j+1] && found==0){
            printf("%d",arr[j]);
            found=1;
            break;
        }
    }
    if(arr[n-1]>arr[n-2]&& found==0){
        printf("%d",arr[n-1]);
        found=1;
    }
    if(found==0){
        printf("-1");
    }
    return 0;
}