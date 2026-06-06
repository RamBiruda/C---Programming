/*******************************************************************************
* Name        : B. JANAKI RAM
* Date        : 06-06-26
*Program      : Write a program to reverse a number.

*************************************************************************************/

#include<stdio.h>

int main()
{
    int num,q,rem,result=0;
    printf("Enter a number : ");
    scanf("%d",&num);

    q = num;

    while(q){
        rem = q%10;
        result = result*10 + rem;
        q = q/10;
      }

    printf("After number reversing : %d\n",result);

}
