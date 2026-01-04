#include <stdio.h>

//continue statement
int main(){
for(int i=1; i<=5; i++){
   if(i==3){
    continue;
   }
   printf("%d ", i);
}
printf("\nLoop completed.\n");
    return 0;
}
