/*******************************************************************************
* Name        : B. JANAKI RAM
* KMID        : KM60BEAI02
* Date        : 04-06-26
*Program      : Write a program to find the largest of 3 numbers. 
*Sample Input :
*
*************************************************************************************/

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a value : ");
    scanf("%d",&a);
    printf("Enter b value : ");
    scanf("%d",&b);
    printf("Enter c value : ");
    scanf("%d",&c);
   
    if(a>b){
        if(a>c){
            printf("%d is greatest\n",a);
           }
        else{
             printf("%d is greatest\n",c);
          }
     }
   else{
           if(b>c){
               printf("%d is greatest\n",b);
            }
           else{
              printf("%d is greatest\n",c);
             }
     }

    return 0;
}

