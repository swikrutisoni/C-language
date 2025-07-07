#include<stdio.h>
int main (){
    int marks;
    printf("enter marks: (0 - 100) \n");
    scanf("%d", &marks);
    if(marks <= 30 ){
        printf("FAIL");
    }
    else if(marks >30 && marks <= 100){
        printf("PASS");
    }
    else{
        printf("WRONG MARKS");    
    }
    return 0;
}