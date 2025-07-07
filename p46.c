//create a 2d array,storing tables of 2 and 3
#include<stdio.h>
void tables(int store[][10], int n,int m,int number);// m is column and n is row
int main(){
    int math[2][10];
    tables(math,0,10,2); 
tables(math,1,10,3);

for(int i=0;i<10;i++){
    printf("%d\t",math[0][i]);
}
for(int i=0;i<10;i++ 
){ printf("%d\t",math[1][i]);}
    return 0;
}
void tables(int store[][10],  int n,int m,int number){
    for(int i=0;i<m;i++){
store[n][i]= number*(i+1);
    }
}