/*Using Switch statement, write a program that displays the following menu for the food items available to take order from the customer:
• B= Burger
• F= French Fries
• P= Pizza
• S= Sandwiches
The program inputs the type of food and quantity. It finally displays the total charges for the order according to following criteria:
• Burger = Rs. 200
• French Fries= Rs. 50
• Pizza= Rs. 500
• Sandwiches= Rs. 150 */
#include <stdio.h>

int main()
{
printf(“B=BURGER\nF=FRENCH FRY\nP=PIZZA\nS=SANDWICHES\n”);

char ss;
int n,x;
scanf(“%c”,&ss);

switch(ss)
{
case ‘B’:
scanf(“%d”,&n);
x= n*200;
printf(“Burger=Rs %d”,x);

case ‘F’:
scanf(“%d”,&n);
x= n*50;
printf(“Burger=Rs %d”,x);

case ‘P’:
scanf(“%d”,&n);
x= n*500;
printf(“Burger=Rs %d”,x);

case ‘S’:
scanf(“%d”,&n);
x= n*150;
printf(“Burger=Rs %d”,x);
}
}
