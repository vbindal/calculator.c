#include <stdio.h>
#include <stdlib.h>
//calculator
int main()
{
double n1,n2;
char indicate,sign;
printf("enter number: ");
scanf("%lf",&n1);
do{printf("which operation do you want to perform +,-,/,* and type c to clear the previous data: ");
   scanf(" %c",&sign);
   printf("enter number: ");
   scanf("%lf",&n2);

   switch(sign){
   case '+':
       printf("%lf + %lf = %lf",n1,n2,n1+n2);
       n1+=n2;
       break;
   case '-':
       printf("%lf - %lf = %lf",n1,n2,n1-n2);
       n1-=n2;
       break;
   case '/':
        printf("%lf / %lf = %lf",n1,n2,n1/n2);
        n1/=n2;
        break;

   case '*':
        printf("%lf * %lf = %lf",n1,n2,n1*n2);
        n1*=n2;
        break;
   case 'c':
        n1*=0;
        printf("you enter %lf for the fresh calculation",n2);
        n1=n2;
        break;
   default:
        printf("error");
        break;

   }
   printf("\ndo you want to continue the calculations yes/no enter y for yes:" );
   scanf(" %c",&indicate);


}while(indicate=='y');
}
