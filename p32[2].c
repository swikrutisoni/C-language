#include<stdio.h>
 float celsius(float centigrade);
 float farenheit(float farenheit);
int main(){
    float c;
    printf("enter temperature in celsius");
    scanf("%f",&c);
    celsius( c);
}
 float celsius(float centigrade){
    float c;
    printf("%.1f",(centigrade*1.8)+32 );
    printf("F");
}