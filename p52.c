/*write a function named slice,which takes a string & returns a sliced
string from index n to m*/
#include<stdio.h>
void slice(char arr[],int n,int m);
int main(){
    char arr[]= "schwester";
    slice(arr,2,5);
   return 0;


}
void slice(char arr[],int n,int m){
char newstr[100];
int j=0;
    for(int i=n; i<=m;i++){
        newstr[j]=arr[i];
        j++;

    }
    newstr[j]='\0';
     puts(newstr);


}