#include<stdio.h>
int main()
{
    int a ,b ,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a < b && a < c)
    {
        printf("%d is smallest",a);
    }
    else if (b < c)
    {
        printf("%d is samllest",b);
    }
    else
    {
        printf("%d is smallest",c);
    }
    return 0;
    }
