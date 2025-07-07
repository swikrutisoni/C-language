#include<stdio.h>
 void printHello();
 void printgoodbye();
 int main(){
    printf("enter f if french or enter i if indian");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        printHello();
    }
    else if(ch=='f'){
         printgoodbye();
    }
    else{
        printf("not from the options");
    }
    return 0;
 }
 void printHello(){printf("namaste\n");}
 void printgoodbye(){printf("bonjour\n");}
