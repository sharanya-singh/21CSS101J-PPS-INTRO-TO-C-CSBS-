/*write a c program using switch case statement to output the following
2*3=6
2+3=5
4+6=10
4/5=0.8 */
#include <stdio.h>
void main()
{
printf("RA2211042010006")
char operator;
int num1,num2;
printf(“\n Enter the operator (+, -, *, /):”);
scanf(“%c”,&operator);
printf(“\n Enter the Two numbers:”);
scanf(“%d%d”,&num1,&num2);
switch (operator)
{
case ‘+’:
printf(“%d+%d=%d”,num1,num2,num1+num2);
break;
case ‘-‘:
printf(“%d-%d=%d”,num1,num2,num1-num2);
break;
case ‘*’:
printf(“%d*%d=%d”,num1,num2,num1*num2);
break;
case ‘/’:
printf(“%d / %d = %d”,num1,num2,num1/num2);
break;
default:
printf(“\n Enter the operator only”);
break;

}
}
