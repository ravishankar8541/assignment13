//Write a recursive function to print first N natural numbers in reverse order
#include"stdio.h"
int revNum(int);
int revNum(int n)
{
   if(n==0)
        return 1;
    printf("%d ",n);
    revNum(n-1);

}
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    revNum(num);
    return 0;
    }
