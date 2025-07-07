#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    while(x%7!=0){
        scanf("%d",&x);
    }
    return 0;
}