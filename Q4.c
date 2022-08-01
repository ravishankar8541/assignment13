//. Write a recursive function to print first N odd natural numbers in reverse order
#include"stdio.h"
int OddNum(int);
int OddNum(int n)
{
    if(n==0)
    return 1;
     printf("%d ",2*n-1);
    OddNum(n-1);

}
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    OddNum(num);
    return 0;

}
