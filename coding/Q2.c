//Write Below Pattern Using Nested Loop
// 45 46 47 48 49
// 46 47 48 49
// 47 48 49
// 48 49
// 49           

#include<stdio.h>
int main()
{
    for(int i = 0;i < 5 ;i++)
     {
    
        for (int j=0 ;j < 5 -i ; j++)
            {   
            printf("%d ",45 + i + j);
            }
        printf("\n");
     }
    reurn 0;
}
