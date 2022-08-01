//Write a recursive function to print first N natural numbers
#include"stdio.h"
int printNatural(int);
int printNatural(int n)
{

    if(n==0)
        return 1;
    printNatural(n-1);
    printf("%d ",n);
}
int main()
{
  int num;
  printf("Enter a number :");
  scanf("%d",&num);
  printNatural(num);
    return 0;
}
