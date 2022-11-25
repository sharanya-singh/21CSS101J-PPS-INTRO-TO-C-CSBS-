#include <stdio.h>
printf("RA2211042010006")
  
  main( ) {
float a=13.5;
float *b, *c ;
b=&a; /*supposeaddressofais1006*/
  c=b;
printf ( "\n%u %u %u", &a, b, c ) ;
printf ( "\n%f %f %f %f %f", a, *(&a), *&a, *b, *c ) ;
}
