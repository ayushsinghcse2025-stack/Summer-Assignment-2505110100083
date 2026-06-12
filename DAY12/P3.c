#include<stdio.h>
void fibonnaci(int n)
{
    int a=0,b=1,c,i;
    for(i=1;i<=n;i++)
    {

        printf("%d", a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
int n;
printf("enter the num");
scanf("%d",&n);
fibonnaci(n);
return 0;
}