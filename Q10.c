//. Write a program in C to calculate the power of any number using recursion.
#include"stdio.h"
void CalPow(int );
void CalPow(int n)
{
    if(n==0)
    {
        return 0;
    }
    CalPow(n%n);
    printf("power of %d is %d",n,n*n);
    return 0;
}
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    CalPow(a);
    return 0;
}
