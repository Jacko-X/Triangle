/* C Program for CS1310 by Jacqueline Plata 9/14/2023
 * given sides a and b of a right triangle 
 * calculate the angles and the other side */
 
 
 
 #include<stdio.h>
 #include <math.h> /* asin() for arcsin */
 
 
 
 
 double get_Leg(void)  /*Get and return of side length*/
 {
 	double leg; /*input from user*/ 
 	
 	printf("What is the length of a leg?  ");
 	scanf("%lf", &leg);
 	printf("You gave %lf for a leg length\n", leg);
 	
 	return leg;
 }
 
 
 
 void main(void)
 {
 	double a,b,c,A,B,C=90; /*3 side lengths, 3 angle measures in degrees*/
 	
 	printf("Give two leg lengths of a right triangle, and get the rest calculated. \n");
 	
 	a = get_Leg();
 	b = get_Leg();
 	printf("Calculating with the rest with %lf and %lf legs\n", a, b);
 	
 	c = sqrt(a*a + b*b);
 	A = (180.0/3.14) * asin(a/c);
 	B = (180.0/3.14) * asin(b/c);
 	printf("Your triangle had side lengths of"
 	       " %lf  %lf  %lf ", a,b,c);
    printf("And angles in degrees of \n %lf  %lf  %lf.\n\n ", A, B, C);
 	
 	
 	
 	
 	
 }
