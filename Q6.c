//Write a recursive function to calculate factorial of a given number
#include"stdio.h"
int fact(int);
int fact(int n)
{
    if(n==1){
        return 1;
    }
    return (n*fact(n-1));

}
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    printf("%d",fact(x));
return 0;
}
