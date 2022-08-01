//Write a recursive function to print octal of a given decimal number
#include"stdio.h"
int conOct(int);
int conOct(int n)
{
    if(n==0)
        return 1;
    conOct(n/8);
    printf("%d",n%8);

}
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    conOct(a);
    return 0;

}
