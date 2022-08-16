//Write a recursive function to calculate sum of first N odd natural numbers
#include"stdio.h"
int OddNaturalNum(int);
int main()
{

    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Sum =%d",OddNaturalNum(n));
  return 0;
}
int OddNaturalNum(int x)
{
    int sum=0;
    if(x==1)
    {
        return 1;
    }
 return ((2*x-1)+OddNaturalNum(x-1));


}
