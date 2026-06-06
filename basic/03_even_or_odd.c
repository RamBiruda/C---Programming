/*******************************************************************************
* Name        : B. JANAKI RAM
* KMID        : KM60BEAI02
* Date        : 04-06-26
*Program      : Write a program to find wheather it is an odd or even number. 
*Sample Input : 
*
*************************************************************************************/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter value for num : ");
    scanf("%d",&num);
    
    if(num&1)
       printf("%d is an odd number\n",num);
    else
       printf("%d is an even number\n",num);


    return 0;
}

