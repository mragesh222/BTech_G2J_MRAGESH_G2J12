#include <stdio.h>

int main() {
    int a,b;
    char op;
    printf("enter two operant\n");
    scanf("%d%d",&a,&b);
    printf("enter an operator(+,-,*,/)");
    scanf(" %c",&op);
    switch(op)
{case'+':
printf("addition=%d",a+b);
break;
case'-':
printf("subtract=",a-b);
break;
case'*':
printf("multiplication=",a*b);
break;
case'/':
if(b<=0)
printf("division can not be perform");
else
printf("division=%f",(float)a/b);
default:
printf("error!incorrect operator");
}
    return 0;
}