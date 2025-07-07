/*make a program that inputs users name and print its length*/
#include<stdio.h>
int length(char arr[]);
int main(){
    char name[100];

    fgets(name,100,stdin);
    int count = length(name);
    printf("lenght is %d",count);
    
    return 0;
}
int length(char arr[]){
    int count =0;
    for(int i=0; arr[i]!='\0';i++){
        count ++;
    }
    return count-1;
}