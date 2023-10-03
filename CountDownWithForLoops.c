/* C Program by Jacqueline Plata for CS1310 9/21/2023
 * Ask for an integer value and print each value down to zero with a for loop
 *for loop to count down
 */
 
 
 
 #include<stdio.h>
 
 
 
 void main(void)
 {
 	int number = 0, count; /* count down to hold user's value*/
 	
 	printf("This program counts down from your number.\n\n");
 	do{ /* make sure number is positive */
 	 printf("Type in a positive integer: ");
 	 scanf("%d", &number);
 	 printf("You entered %i.\n\n", number);
 }while (number<=0);
 
 
// while(number != 10)
// {
 
 printf(" Count down from %i.\n", number);
 for(count = number; count>=0;count = count-1)/* print number to zero*/
 printf(" %i ", count);
 
 
 printf("\n\n Count down again!\n");
 for(count=0; count<=number; count++)
 printf(" %i ",number-count);
 
 
 printf("\n\n Count up!\n");
 for(count=1; count<=number; count++)
 printf(" %i ", count);
 
 
 printf("\n\n Count down!\n");
 count=number;
 while(count>=0) /*Count down with a while*/
 {
 	printf(" %i ", count);
 	count = count-1;
 	
 }
 printf("\n\n");
 
 
 
 
//ca}

 	
 }
