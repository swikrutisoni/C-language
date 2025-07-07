/*write a program to store a data of three students*/
#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
struct student s1;
s1.roll=145;
s1.cgpa=9.2;
strcpy(s1.name,"anya"); 
printf("%s",s1.name);
printf("%d",s1.roll);
printf("%f",s1.cgpa);

struct student s2;
s2.roll=789;
s2.cgpa=9.7;
strcpy(s2.name,"tanmay"); 
printf("%s",s2.name);
printf("%d",s2.roll);
printf("%f",s2.cgpa);

struct student s3;
s3.roll=175;
s3.cgpa=8.2;
strcpy(s3.name,"tejas"); 
printf("%s",s3.name);
printf("%d",s3.roll);
printf("%f",s3.cgpa);

return 0;
}
