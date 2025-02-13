// Your code here...
#include <stdio.h>
#include <math.h>
int main(){
    int x,y,c;
    char o;
    scanf("%d %d %c",&x,&y,&o);
    switch(o){
        case '+':
        c=x+y;
        printf("%d",c);
        break;
        case '-':
        c=x-y;
        printf("%d",c);
        break;
        case '*':
        c=x*y;
        printf("%d",c);
        break;
        case '/':
        if(y!=0){
        c=x/y;
        printf("%d",c);
        }
        else{
            printf("error");
        }
        break;
        default:
        printf("error");
        break;
}
}