/* C Program by Jacqueline Plata for CS1310 9/14/2023
 * Prints out smaller/larger of two numbers with functions */
 
 
 
 #include <stdio.h>
 
 
 
 
 
 double get_number(void) /*returns a number*/
 {
 	double number; /*Input from user*/
 	
 	printf("Please type in a number, any number: ");
 	scanf("%lf", &number);
 	printf("You entered %lf.\n\n", number);
 	
 	return number;
 	
 }
 
 
 /*Print the relationship between one and two*/
 void PrintMoreOrLess(double one, double two)
 {
 	//printf("### in PrintMoreOrLess \n");
 	
 	if(one < two) /*Find out which is larger and smaller*/
 		printf("%lf is smaller and %lf is larger.\n\n", one, two);
 	else if(two < one)
 		printf("%lf is smaller and %lf is larger.\n\n", two, one);
 	else
 		printf("%lf and %lf is equal.\n\n", two, one);
 			
 }
 
 

void main(void)
{
	double first, second; /* numbers input by user*/
	
	printf("This program will tell you what number is more or less "
	       "of two values.\n\n");
	
	first = get_number();
	second = get_number();
	printf("\n %lf and %lf will now be compared.\n", first, second);
	
	PrintMoreOrLess(first,second);
	
}
