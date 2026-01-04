#include <stdio.h>

//break statement
int main() {
for(int i=1; i<=5; i++){
   if(i==3){
    break;
   }
   printf("%d ", i);
}
printf("\nLoop terminated.\n");
}
