/* C Program by Jacqueline Plata for CS1310 9/7/2023
 * This program prints the name of a digit using switch
 */
 
 
 
 #include<stdio.h>
 
 
 
 void main(void)
 {
 	int digit; // Holds users value
 	
 	printf("This program prints the name of your digit.\n\n");
 	printf("Type in a single, positive digit:  ");
 	scanf("%d", &digit);
 	printf("You entered %d.\n\n", digit);
 	
 	printf("The name of your digit is ");
 	switch(digit) /*print the digit name*/
 		{
 			case 0:
 				printf("Zero");
 				break;
 			case 1:
 				printf("One");
 				break;
 			case 2:
 				printf("Two");
 				break;
 			case 3:
 				printf("Three");
 				break;
 			case 4:
 				printf("Four");
 				break;
 			case 5:
 				printf("Five");
 				break;
 			case 6:
 				printf("Six");
 				break;
 			case 7:
 				printf("Seven");
 				break;
 			case 8:
 				printf("Eight");
 				break;
 			case 9:
 				printf("Nine");
 				break;
 			case 10:
 				printf("Ten");
 				break;
 		   					 case -1:
 							printf("One");
 							break;
 						case -2:
 							printf("Two");
 							break;
 						case -3:
 							printf("Three");
 							break;
 						case -4:
 							printf("Four");
 							break;
 						case -5:
 							printf("Five");
 							break;
 						case -6:
 							printf("Six");
 							break;
 						case -7:
 							printf("Seven");
 							break;
 						case -8:
 							printf("Eight");
 							break;
 						case -9:
 							printf("Nine");
 							break;
 						case -10:
 							printf("Neg Ten");
 							break;
 						
 							
 				
 			default:
 				printf("%d is not a single, positive digit", digit);
 			
 			
 		}
 	printf(".\n\n");
 	
 	
 	switch(digit%2)
 	{ 
 	    case 0:
 	      printf("%d is even", digit);
 	      break;
 	    
 	    default:
 				printf("%d is odd", digit);	
 		
 	}
 	
 }
