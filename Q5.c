//Write a recursive function to calculate sum of digits of a given number
#include"stdio.h"
int SumOfDigit(int);
int SumOfDigit(int x)
{
    if(x==0)
        return 0;
    return (x%10+SumOfDigit(x/10));
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Sum of digit of %d is %d ",n,SumOfDigit(n));
    return 0;
}
