//Write a recursive function to print squares of first N natural numbers
#include"stdio.h"
int PrintSquare(int);
int PrintSquare(int n)
{
    if(n==0)
        return 1;
    PrintSquare(n-1);
    printf("\nSquare of %d is %d",n,n*n);

}
int main()
{

    int a;
    printf("Enter a Number :");
    scanf("%d",&a);
    PrintSquare(a);
return 0;
}
