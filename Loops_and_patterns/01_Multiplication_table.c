/*******************************************************************************
* Name        : B. JANAKI RAM
* Date        : 06-06-26
*Program      : Write a program to print the multiplication table.
*************************************************************************************/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

     printf("Multiplication Table for %d is given below\n",num);
    
    for(int i=1;i<=10;i++){
            printf("%2d * %2d = %2d\n",num,i,num*i);
        }


          
    return 0;
}

