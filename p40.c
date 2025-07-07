//wrute a function to calculate the product , sum and average of two numbers.
//print the average in main function
#include<stdio.h>
void calculate(int a, int b, int *product, int *sum, float *average);
int main() {
    int a, b;
    int product;
    int sum;
    float average;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    calculate(a, b, &product, &sum, &average);
    printf("Product: %d\n", product);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}
void calculate(int a, int b, int *product, int *sum, float *average) {
    *product = a * b;
    *sum = a + b;
    *average = (float)(*sum) / 2.0;
}