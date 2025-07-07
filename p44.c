//write a function to reverse an array
#include<stdio.h>
 int reverse(int arr[],int n);
 int main(){
    
 int arr[]={1,2,3,4,5};
 reverse(arr,5);
    
    return 0;
 }
 int reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstvalue = arr[i];
        int secondvalue = arr[n-i-1];
         arr[n-i-1]=firstvalue ;
         arr[i] =secondvalue ;


    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
 }