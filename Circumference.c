/* C Program by Jacqueline Plata for CS1310 8/31/2023
 * To find the circumference of a circle with a radius from the user
 */


#include<stdio.h>
#define pi 3.14159  /*the constant pi for circles*/



void main(void)
{
	double radius, circumference; /*Input in cm, calulated*/
	double area; /*Calaulate area from radius*/
	
	/*get radius from the user*/
	printf("\n\nThis program will find the circumference" 
	       "of your circle\n");
	printf("Type in the radius in inches:  ");
	scanf("%lf", &radius);
	printf("You typed in %lf in \n", radius);
	
	/*Calculate the circumference*/
	circumference = 2 * pi * radius;
	
	/*print the results*/
	printf("\n\nYour circle with a radius of %lf in\n"
           "has a circumference of %lf in.\n",radius, circumference);
    
    area= pi * radius * radius;
    printf("The area of your circle is %lf square inches \n", area);
	
	
}
