//create a string firstname and lastname to store details of user and print all the 
//charecters using a loop
#include<stdio.h>
void printstring(char arr[]);
int main(){
    char firstname[] = "swikruti";
    char lastname[] = "soni";
    printstring(firstname);
    printstring(lastname);
    return 0;
}
void printstring(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
}