#include<stdio.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        printf("%d\n",i*n);
    }
    return 0;
}