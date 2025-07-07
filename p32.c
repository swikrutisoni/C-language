#include<stdio.h>
void swikruti(int count);
int main(){
    int c;
    printf("enter count");
    scanf("%d",&c);
    swikruti(c);
    return 0;
}
void swikruti(int count) {
    if(count==0){
        return;
    }
    printf("hello world\n");

    swikruti(count-1);
}
