#include <stdio.h>
int main()
{
char ch;
printf("enter any alphabet\n");
scanf("%c", &ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
printf("vowel is:%c",ch);
else
    printf("it is a consonent:%c",ch);
    return 0;
}