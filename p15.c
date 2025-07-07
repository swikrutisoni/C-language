#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter number");
    scanf("%d",&n);
    int sum=0;
// for(i=1;i<=n;i++){
//     sum = sum+i;
// }
while(i<=n){
    sum+=i;
    i+=1;
    //printf("sum is %d",sum);
    
}
printf("sum is %d",sum);
return 0;
 
}