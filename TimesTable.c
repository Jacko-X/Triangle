/* C Program for CS1310 by Jacqueline Plata 10/5/2023
 * Create a two dimensional array called “times” that holds the
 * multiplication table for 0 to 10.
 * Make a times table and read from it.
 */
 
 
 
 #include<stdio.h>
 
 
 
 int get_number(void) /* get integer between 0 and 10 */
 {
 	int number = -1; /* Users input */
 	
 	do { /* Only accept a value from 0 to 10 */
 		printf("Enter an integer from 0 to 10: ");
 		scanf("%d", &number);
 		printf("You entered %i.\n", number);	
 	}while(number<0 || number>10);
	return(number);
 	
 	
 	
 }
 
 
 
 
 void main(void)
 {
 	int times[11][11]; /*Multiplication tables */
 	int i, j, num1, num2, product; /*Indexes and user inpus */
 	
 	printf("This program looks up your product in a table.\n\n");
 	
 	for(i=0; i<11; i++) /*fill in multiplication table */
 		for(j=0; j<11; j++)
 			times[i][j] = i*j;
 			
 	num1 = get_number();
 	num2 = get_number();
 	product = times[num1][num2];
 	
 	printf("\n\n %i * %i is %i. ( %i * %i = %i )\n\n", 
	 		num1, num2, product, num1, num2, num1*num2);
	 	
		 	
	printf(" My multiplication table\n");
	printf("	0   1   2   3   4   5   6   7   8   9   10\n");
	printf("	-------------------------------------------\n");
	for(i=0; i<11; i++)
	{
		printf(" %2i |", i);
		for(j=0; j<11; j++)
			printf(" %3i", times[i][j]);
		printf("\n");	
	}
	
	
	printf("\nMy multiplication table\n");
	printf("	0   1   2   3   4   5   6   7   8   9  10  11  12\n");
	printf("	----------------------------------------------------\n");
	for(i=0; i<13; i++)
	{
		printf(" %2i |", i);
		for(j=0; j<13; j++)
			printf(" %3i", times[i][j]);
		printf("\n");	
	}
	
	
 	
 }
