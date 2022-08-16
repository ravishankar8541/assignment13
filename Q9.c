//Write a program in C to count the digits of a given number using recursion

#include"stdio.h"
int countDigit(int n);
int countDigit(int n)
{
    static int count=0;
    if(n<10)
        return 1;

    return 1+countDigit((n/10));

}
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    printf(" = %d",countDigit(num));
    return 0;
}
