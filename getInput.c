/* C Program by Jacqueline Plata for CS1310 8/31/2023
 * scanf example - get input and print it out*/ 
 
 
 #include<stdio.h>
 
 
 
 void main(void)
 {
 	char letter; /*hold users character */
 	int inumber = 0; /* interger input*/
 	double dnumber; /* floating point input*/
 	
 	printf("This program will print out what you type in. \n");
 	printf("Please type in a character and enter: ");
 	scanf("%c", &letter);
 	printf("\n\nThe character you typed in is %c.\n", letter);
 	getchar(); /*read in newline/enter */
 	
 	
 	printf("Please type in another character and enter: ");
 	scanf("%c", &letter);
 	printf("\n\nThe second character you typed in is %c.\n", letter);
 	
 	
 	printf("Type in an interger:  ");
 	scanf("%d", &inumber);
 	printf("You typed in %i. %c   %lf \n\n", inumber, letter, dnumber);
 	
 	
 	printf("Please type in any number and enter: ");
 	scanf("%lf", &dnumber);
 	printf("\n\nThe number you typed in is %lf.\n", dnumber);
 	
 }
