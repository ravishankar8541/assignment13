//Write a recursive function to calculate HCF of two numbers
#include"stdio.h"
int HCF(int,int);
int main()
{

    int n,n2;
    printf("Enter first number :");
    scanf("%d",&n);
    printf("Enter second number :");
    scanf("%d",&n2);
    printf("HCf of %d and %d is %d",n,n2,HCF(n,n2));
    return 0;
}
int HCF(int a,int b)
{
   int num1=(a>b)?a:b;
   int num2=(a<b)?a:b;
    if(num2==0){
        return num1;
        }
        else
        {

    return HCF(num2,(num1%num2));
        }
}
