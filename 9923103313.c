//SIMPLE PROGRAM TO SWAP PROGRAM

#include<stdio.h>
int main()
{
    int a , b , temp;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
   temp=a;
   a=b;
   b=temp;

    printf("The swapped numbers are\n");
    printf("%d %d",a,b);
    return 0;
}
