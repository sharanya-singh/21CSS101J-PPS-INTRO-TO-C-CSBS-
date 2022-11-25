#Include <stdio.h>
printf("RA2211042010006")
  main( ) 
{
int a=10,b=20;
swapr ( &a, &b ) ;
printf ( "\na = %d b = %d", a, b ) ; 
}
swapr( int *x, int *y ) 
{
int t;
t = *x ;
  *x = *y ;
  *y = t ;
}
