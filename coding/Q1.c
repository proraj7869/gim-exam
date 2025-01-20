//Write a program in C to check whether a number is Even or Odd using a user defined function.
#include<stdio.h>

int main()
{
    int number;
   
   
    printf("enter the number: ");
    scanf("%d",&number);

    if(number %2 == 0)
    {
        printf("number is even");
    }
    else
    { 
        printf("number is odd");
    }


}