#include<stdio.h>
void sakshi(int n);
int main (){
   int n;
   int sum=0;
    printf("enter no");
    scanf("%d",&n);
    sakshi(n);
    return 0;
}
void sakshi(int n){
    int sum=0 ;//yr for loop ke bhar hone wala kyuki agar ye for loop ke andar aya toh toh vo vapas for loop mein ayaega toh int sum=0 matlab wapas null
    for(int i=1;i<=n;i++){
         sum=sum+i;
        
    }
    printf("%d",sum);

}
