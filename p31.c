#include<stdio.h>
#include<math.h>
float squarearea (float side);
float rectanglearea (float side1 , float side2);
float circlearea (float radius);
int main (){
    float side1,side2;
   
    printf("enter side1\n");
 scanf("%f",&side1);
     printf("enter side2\n");


    
    scanf("%f",&side2);
    printf("rectangle area is =%f", rectanglearea ( side1 ,  side2));
    return 0;
}
float squarearea (float side){
    return side*side;
}
float rectanglearea (float side1,float side2){
    return side1*side2;
}
float circlearea (float radius){
    return 3.14*radius*radius;
}

