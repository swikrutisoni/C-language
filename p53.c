/*write a function to count occurence of vowels in a string*/
#include<stdio.h>
void vowel(char arr[]);
int main(){
    char arr[]="schwester";
    vowel(arr);
    return 0;
}
void vowel(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
            count++;
        }
    }
    printf("%d",count);
}