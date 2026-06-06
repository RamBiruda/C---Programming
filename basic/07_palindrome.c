/*******************************************************************************
* Name        : B. JANAKI RAM
* Date        : 06-06-26
*Program      : Check the given number is palindrome number or not
*************************************************************************************/

#include<stdio.h>

int main()
{
    int num,result=0,q,rem;
    printf("Enter a number : ");
    scanf("%d",&num);
    q = num;
    while(q){
       rem = q%10;
       result = result*10 + rem;
       q = q/10;
      }
    if(result == num){
         printf("%d is a palindrome\n",num);
      }
    else{
        printf("%d is not a palindroe\n",num);
      }
    return 0;
}

