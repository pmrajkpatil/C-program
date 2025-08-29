#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter 2 number\n");
    scanf("%d %d",&a,&b);
    printf("before swaping\n");
    printf("a=%d  b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swaping\n");
    printf("a=%d  b=%d",a,b);

    return 0;
}