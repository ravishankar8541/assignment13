//Write a recursive function to print first N even natural numbers
#include"stdio.h"
int EvenNum(int);
int EvenNum(int n)
{
    if(n==0)
    return 1;

    EvenNum(n-1);
    printf("%d ",2*n);

}
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    EvenNum(num);
    return 0;

}
