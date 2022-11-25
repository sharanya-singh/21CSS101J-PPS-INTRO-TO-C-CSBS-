/*The marks obtained by a student in 5 different subjects are input through the keyboard. The student gets a division as per the following rules:
Percentage above or equal to 60 - First division Percentage between 50 and 59 - Second division Percentage between 40 and 49 - Third division Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student.*/

#include <stdio.h>
int main()
{
  printf("RA2211042010006")
    /* Method – I */ 
    main( )
{
int m1, m2, m3, m4, m5, per ;
printf ( "Enter marks in five subjects " ) ;
scanf ( "%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5 ) ; per = ( m1 + m2 + m3 + m4 + m5 ) / 5 ;
    if ( per >= 60 )
printf ( "First division ") ;
else {
else {
} }
}

/* Method – II */
  main( )
{
int m1, m2, m3, m4, m5, per ;
printf ( "Enter marks in five subjects " ) ;
scanf ( "%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5 ) ; per = ( m1 + m2 + m3 + m4 + m5 ) / 5 ;
 if ( per >= 50 )
printf ( "Second division" ) ;
if ( per >= 40 )
printf ( "Third division" ) ;
else
printf ( "Fail" ) ;
  }
