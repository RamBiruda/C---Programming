/*******************************************************************************
* Name        : B. JANAKI RAM
* Date        : 04-06-26
*Program      : write a c program to swap two numbers (with temp variable) 
*************************************************************************************/

#include<stdio.h>

int main()
{
    int a = 10,b=20,temp;
    printf("Before swapping : a=%d and b=%d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping : a=%d and b=%d\n",a,b);

    return 0;
}

