/* C Program by Jacqueline Plata for CS1310 9/12/2023
 * Find C given radius of circle*/
 
 
 
 #include<stdio.h>
 #define pi 3.1416
 
// double radius, C; /* Half length across circle; length around it*/
 
 
 
 double getradius(void) /* Get radius from the user*/
 {
 	double radius; /*get from user */
 	
 	printf("Type in a radius in cm:  ");
 	scanf("%lf", &radius);
 	printf("You entered %lf cm.\n\n", radius);
 	return radius;
 }
 
 
 
 double calculateC(double r) /* uses c=2 pi r to get C */
 {
 	return(2*pi*r);
 }
 
 
 void print_results(double PR, double PC) /*Print C and radius*/
 {
 	printf(" A circle with radius %lf has C of %lf cm.", PR, PC);
 	
 	
 }
 
 
 
 void main(void)
 {
 	double radius, C; /* holds radius and circumference */
 	printf("This Program finds the circumference given your radius.\n\n");
 	
 	radius = getradius();
 	C = calculateC(radius);
 	print_results(radius, C);
 }
 
 
 
 
  
