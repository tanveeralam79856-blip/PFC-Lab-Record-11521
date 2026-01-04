//Declare variables of int, float, char, double; scanf/printf with format specifiers
#include <stdio.h>
//declaring variables
int main(){
    int a;           //integer variable
    float b;         //float variable
    char c;          //char variable
    double d;        //double variable
    //taking input using scanf
    printf("Enter the following values:\n");
    printf("Enter any integer:");
    scanf("%d", &a);
    printf("Enter a float value:");
    scanf("%f", &b);
    printf("Enter a character:");
    scanf(" %c", &c);
    printf("Enter a double value:");
    scanf("%lf", &d);
    //output using printf
    printf("\nYou have entered the following values:\n");
    printf("Integer: %d\n",a);
    printf("float: %f\n",b);
    printf("Character: %c\n",c);
    printf("double: %lf\n",d);
    return 0; }
