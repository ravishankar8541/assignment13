//Write a recursive function to calculate sum of first N natural numbers
#include"stdio.h"
int SumOfNatural(int );
int main()
{

    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Sum of %d is %d ",n,SumOfNatural(n));
    return 0;
}
int SumOfNatural(int x)
{

    if(x==1)
    {
        return 1;
    }
    return (x+SumOfNatural(x-1));
}
