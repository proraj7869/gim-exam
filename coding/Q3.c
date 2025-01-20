//Write a C Program to Calculate Profit and Loss on a Transaction.
#include<stdio.h>
int main()

{

float costprice,sellprice,profit,loss;

printf("enter the costprice of product: ");
scanf("%f",&costprice);

printf("enter the sellprice of product: ");
scanf("%f",&sellprice);

if(sellprice>costprice)
{
    profit=sellprice-costprice; 
    printf("profit is :%.2f",profit);
}else if (costprice>sellprice)
{
    loss=costprice-sellprice;
    printf("loss is :%.2f",loss);
}else{
    printf("no profit or loss\n");
}

} 
