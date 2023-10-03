/* C Program for CS1310 by Jacqueline Plata 9/19/2023
 * Print integers 1 to n where n is input by the user 
 */
 
 
 
 #include<stdio.h>
 
 
 
 int get_input(void) /*Ask for and return an integer>0 */
 {
 	int num = -1; /* To return user value must be greater than zero: force starting while */
 	
 	while(num < 1) /* get a positive integer or untill positive int */
 	{
 		printf("Type in a positive integer:  ");
 		scanf(" %i", &num);
 		printf("You entered %i.\n", num);
 		
 		
 	}
 	
 }
 
 
 
 void main(void)
 {
 	int count = 1, number; /*number for loops, users value */
 	
 	
 	printf("This program prints 1 to your number.\n\n");
 	number = get_input();
 	
 	printf("\n\nThe integers 1 to %i are \n", number);
 	while( count <= number) /*print number until count is less than number */
 	{
 		printf(" %i ", count);
 		count = count + 1;
 		
 		
 	}
 	
 	count = number;
 	printf("\n\nThe number %i to 1 are \n\n", number);
 	while(count > 0) /*print count while greater than zero */
 	{
 		printf(" %i ", count);
 		count = count -1;
 		
 		
 	}
 	
 	
 	
 		
 	
 }
