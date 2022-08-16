//3. Write a recursive function to calculate sum of first N even natural numbers.
#include"stdio.h"
int SumEven(int);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Sum = %d",SumEven(n));
    return 0;
}
int SumEven(int x)
{
    if(x==1)
    {
        return 2;
    }
    return (2*x+SumEven(x-1));
}
