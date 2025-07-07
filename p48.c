/*ask the user to enter their firstname and print it back to them
also try this with their fullname*/
#include<stdio.h>
int main(){
    char firstname[50];
    
scanf("%s",firstname);
    printf("your first name is %s",firstname);//scanf and fgets saath mein kam nhi karta

    char fullname[100];
    fgets(fullname,100,stdin);
    puts(fullname);
    return 0;
}