/* C Program by Jacqueline Plata for CS1310 9/5/2023
 * Tell the user if their interger number is one digit or not 
 * use if-else
 */
 
 
 
 #include<stdio.h>
 
 
 
 void main(void)
 {
 	int number; //Holds the number from a user
 	
 	printf("This program says how many digits are in your number.\n\n");
 	printf("Type in an integer:");
 	scanf("%d", &number);
 	printf("You entered %d.\n\n",number);
 	
 	//Check for number of digits 
 	
 	if(number > -10 && number < 10) /* a single digit*/
 	     printf("%i has one digit.\n", number);
 	else if(number < 100 && number > -100) /* Two digits*/
 	        printf("%i has two digits.\n", number);
 	else if(number < 1000 && number > -1000) /* Three digits*/
 	        printf("%i has three digits.\n", number);
 	else if(number < 10000 && number > -10000) /* four digits*/
 	        printf("%i has four digits.\n", number);
 	else if(number < 1000000 && number > -1000000) /* five digits*/
 	        printf("%i has five digits.\n", number);
 	else if(number < 1000000 && number > -1000000) /* Six digits*/
 	        printf("%i has six digits.\n", number);
 	else if(number < 10000000 && number > -10000000) /* Seven digits*/
 	        printf("%i has seven digits.\n", number);
 	else if(number < 100000000 && number > -100000000) /* eight digits*/
 	        printf("%i has eight digits.\n", number);
 	else if(number < 1000000000 && number > -1000000000) /* nine digits*/
 	        printf("%i has nine digits.\n", number);
 	else if(number < 10000000000 && number > -10000000000) /* Ten digits*/
 	        printf("%i has Ten digits.\n", number);
 	else if(number < 100000000000 && number > -100000000000) /* Eleven digits*/
 	        printf("%i has eleven digits.\n", number);
 	
 	    
 	    
 	    
 	     printf("\nThe number %i has more than one digit.\n", number);
 
 
 
 
 
}
