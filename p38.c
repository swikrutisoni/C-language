#include<stdio.h>
//swap 2 numbers a and b
void swap(int a,int b);
int main(){
    int a;
    int b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    swap(a,b);
}
void swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
    printf("%d,%d,",a,b);
}
