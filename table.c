#include <stdio.h>

int main() {
    int n,i,a=10,sum=0;
    printf("enter the value");
    scanf("%d",&n);
    for(i=1;i<=a;i++)
    {
        sum=(i*n);
        printf("the table is %d\n",sum);
    }

    return 0;
}
