/*******************************************************************************
* Name        : B. JANAKI RAM
* KMID        : KM60BEAI02
* Date        : 04-06-26
*Program      : Swap 2 numbers without temp variables. 
*Sample Input : 
*
*************************************************************************************/

#include<stdio.h>

int main()
{
    int a=10,b=20;
    printf("Before swapping : a=%d and b=%d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping : a=%d and b=%d\n",a,b);

    return 0;
}

