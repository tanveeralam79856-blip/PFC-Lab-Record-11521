//swapping two numbers
#include <stdio.h>
int main(){
    int temp;
    int a=5;
    int b=10;
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping: ");
    printf("a = %d, b = %d\n",a,b);
    return 0;
}
