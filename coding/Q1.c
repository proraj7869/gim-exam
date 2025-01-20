//Write a program in C to check whether a number is Even or Odd using a user defined function.
#include <stdio.h>

void checkOddEven(int number);

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    checkOddEven(num);
    return 0;
}

void checkOddEven(int number) 
{
    if (number % 2 == 0) 
    {
        printf("%d is even.\n", number);
    } 
    else 
    {
        printf("%d is odd.\n", number);
    }
}
