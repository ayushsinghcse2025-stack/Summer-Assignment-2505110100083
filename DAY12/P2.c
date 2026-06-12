#include<stdio.h>
int armstrong(int n)
{
    int sum=0,rem,temp;
    temp =n;
    while(n>0)
    {
        rem =n%10;
        sum =sum+(rem*rem*rem);
        n=n/10;
    }
    if ( temp==sum)
    return 1;
    else
    return 0;
}
int main()
{
    int num;
    printf("enter the num =");
    scanf("%d",&num);
    if(armstrong(num))
    printf("armstorng no");
    else 
    printf("not a armstrong no");
    return 0;
}