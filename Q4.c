//Write a recursive function to calculate sum of squares of first n natural numbers
#include"stdio.h"
int SumSquare(int);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Sum = %d",SumSquare(n));
    return 0;
}
int SumSquare(int x)
{
    if(x==1)
    {
        return 1;
    }
    return (x*x+SumSquare(x-1));
}
