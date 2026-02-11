#include <stdio.h>
int main()
{
 int a,b,c;
 printf("enter three number:\n");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b && a>c)
 {
 printf("a is a greatest number%d",a);
}
else
if(b>a && b>c)
{
printf("b is a greatest number%d",b);
}
else
{
printf("c is a greatest number%d",c);
}
return 0;
}