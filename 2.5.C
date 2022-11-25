/*A company insures its drivers in the following cases:
− If the driver is married.
− If the driver is unmarried, male & above 30 years of age.
− If the driver is unmarried, female & above 25 years of age.
In all other cases the driver is not insured. If the marital status, sex and age of the driver are the inputs,
write a program to determine whether the driver is to be insured or not.
Here after checking a complicated set of instructions the final output of the program would be one of the two—Either 
the driver should be ensured or the driver should not be ensured. */
#include <stdio.h>
int main()
{
  printf("RA2211042010006")
    /* Insurance of driver - without using logical operators */ 
    main( )
{
char sex, ms ; int age ;
printf ( "Enter age, sex, marital status " ) ; scanf ( "%d %c %c", &age, &sex, &ms ) ;
if ( ms == 'M' )
printf ( "Driver is insured" ) ;
else {
if ( sex == 'M' )
{
  if ( age > 30 )
printf ( "Driver is insured" ) ;
else
printf ( "Driver is not insured" ) ;
} 
  else
  {
   if ( age > 25 )
printf ( "Driver is insured" ) ;
else
printf ( "Driver is not insured" ) ;
    } }
}
