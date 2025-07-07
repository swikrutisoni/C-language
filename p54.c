/*check if a given character is present in the string or not*/
#include<stdio.h>
void check(char arr[],char c);
int main(){
char arr[]="twilight";
char c='w';
check(arr,c);
return 0;
}
void check(char arr[],char c){
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]== c){
            printf("character is present");
            return;
        }
        
        
    }
}