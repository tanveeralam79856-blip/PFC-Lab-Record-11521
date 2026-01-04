#include <stdio.h>
int main(){
    int a=5;
    int b=2;
    char op;
    scanf("%c",&op);
    switch(op){
        case'+': printf("%d\n",a+b);
        break;
        case'-': printf("%d\n",a-b);
        break;
        case'*': printf("%d\n",a*b);
        break;
        case'/': printf("%d\n",a/b);
        break;
        default: printf("enter valid");
        break;
    }
}
