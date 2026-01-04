//nested if
#include <stdio.h>
int main(){
int a=12;
int b=23;
int c=34;
if(a>b){
if(a>c){printf("a is maximum");}
else{printf("c is maximum");}
}
else{
    if(b>c){printf("b is maximum");}
    else{printf("c is maximum");}
}
return 0;
}
