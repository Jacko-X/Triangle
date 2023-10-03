/*C Program by Jacqueline Plata for CS1310 9/7/2023
 *Test DeMorgan's Law -- input between 0 and 1
 */
 
 
 
 #include<stdio.h>
 
 
 
 void main(void)
 {
 	double number;
 	
 	printf("Enter a number between 0 and 1: ");
 	scanf("%lf", &number);
 	
 	if(number<0 || number>1)
 		printf("%.5lf is outside of [0,1].\n", number);
 		
 	printf("\n\n\n");
 	if(!(number<0 || number>1))
 		printf("not all--  %.4lf is inside of [0,1].\n\n", number);
 		
 	if(!(number<0)&& !(number>1))
 		printf("not each and -- %.4lf is inside of [0,1].\n\n", number);
 		
 	if(number>=0 && number<=1)
 		printf(">=0 and <=1 -- %.4lf is inside of [0,1].\n\n", number);
 	
 	
 }
