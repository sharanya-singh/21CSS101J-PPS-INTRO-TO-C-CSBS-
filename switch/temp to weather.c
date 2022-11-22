#include <stdio.h>
void main()
{
  printf("RA2211042010006")
int choice;
printf( “Enter any valuen” );
scanf( “%d”, & choice );
switch ( choice ) {
case 1:
printf( “It is hot weather!n” );
break;
case 2:
printf( “It is a stormy weather!n” );
break;
case 3:
printf( “It is a sticky weather!n” );
break;
default:
printf( “It is a pleasant weather!n” );
break;
}
getch();
}
