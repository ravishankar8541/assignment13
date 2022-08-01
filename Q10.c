//. Write a recursive function to print reverse of a given number
#include"stdio.h"
int revNum(int);
int revNum(int n)
{
    if(n==0)
        return 1;
         printf("%d",n%10);
        revNum(n/10);

}
    int main()
    {
      int num;
      printf("Enter a number :");
      scanf("%d",&num);
      revNum(num);
      return 0;

    }
