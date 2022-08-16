//Write a recursive function to print first N terms of Fibonacci series
#include"stdio.h"
void fabonacci(int);
void fabonacci(int n)
{
    static int n1=0,n2=1,n3;
    if(n==0)
        return 0;
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ",n3);
    fabonacci(n-1);

}
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    printf("Fabonacci series are :%d %d ",0,1);
    fabonacci(x);
    return 0;
}
