#include <stdio.h>

int main() {
 printf("Enter any natural number\n");
int n;
scanf("%d",&n);
int sum = 0;
for(int i=1; i<=n; i++){
    sum = sum+i;
}
printf("Sum of first n natural numbers = %d",sum);

    return 0;
}
