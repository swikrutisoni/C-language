#include<stdio.h>
float marks(float n1,float n2, float n3);

int main(){
    float n1,n2,n3;
    printf("enter sanskrit marks");
    scanf("%f",&n1);
     printf("enter math marks");
      scanf("%f",&n2);
      printf("enter science marks");
       scanf("%f",&n3);
       printf("%f",(marks (n1, n2,  n3)));
       return 0;
       
    

}
float marks(float n1,float n2, float n3){
    return ((n1+n2+n3)/3);
}

