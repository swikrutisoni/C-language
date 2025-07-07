#include<stdio.h>
int main (){
    int n ;
    int factorial=1;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        factorial*=i;

    }
    printf("%d",factorial);
    return 0;

}