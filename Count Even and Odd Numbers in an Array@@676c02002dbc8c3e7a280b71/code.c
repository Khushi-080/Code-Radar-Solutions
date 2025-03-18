// Your code here...
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0;
    for(int j=0;j<=n-1;j++){
        if(arr[j]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}