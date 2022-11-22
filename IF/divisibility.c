#incude <stdio.h>
void main( )
{
  printf("RA2211042010006")
int a;
printf(“enter a number”);
scanf(“%d”,&a);
if( a%5==0 && a%8==0)
{
printf(“This number divisible by both 5 and 8”);
}
else if( a%8==0 )
{
printf(“This number is divisible by 8”);
}
else if(a%5==0)
{
printf(“this number is divisible by 5”);
}
else
{
printf(“This number is divisible by neither 8 nor 5”);
}
getch();
}
