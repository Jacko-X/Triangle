/* C Program by Jacqueline Plata for CS1310 10/3/2023
 * Get 5 numbers from the user, store the numbers
 * in an array, calculate, print the average;
 * and find minimum and maximum values.
 */
 
 
 
 #include<stdio.h>
 
 
 
 double nums[5]; /* Hold 5 input values */
 int Aindex; /* Access to nums array */
 
 
 
 void read_and_print_number(void) /* take in five values to nums */
 {
 	double temp; /* read in from the user */
 	
 	for(Aindex = 0; Aindex < 5; Aindex++) /* Get and print 5 values */
 {
 	printf("Type in a number: ");
 	scanf("%lf", &temp);
 	nums[Aindex] = temp;
 	printf("You entered %lf.\n\n", nums[Aindex]);	
 }	
 
 }
 
 
 
 double add_up_numbers(void) /* Returns sum of num values */
 {
 	double sum = 0; /*The addition of all the values */
 	
 	for(Aindex = 0; Aindex < 5; Aindex++) /* Add up nums */
 		sum = sum + nums[Aindex];
 	return sum;
 
 }  
 
 
 
 void find_min_max(void) /* Print min and max in nums */
 {
 	double min, max; /* Minimun and Maximun values from nums */
 	int mini = 0, maxi = 0; /*Location of min and max values */
 	
 	min = nums[0]; /* Assume min and max are the first values */
 	max = nums[0];
 	for(Aindex = 1; Aindex < 5; Aindex++) /* find min and max from spot 1+ */
 		{
 			if(max < nums[Aindex]) /* new max */
 				{
 					max = nums[Aindex];
 					maxi = Aindex;
 				}
 			if(min > nums[Aindex]) /* new min */
 				{
 					min = nums[Aindex];
 					mini = Aindex;
 				}
 			
 		}
 	printf("The smallest value is %lf an spot %lf.\n\n", min, mini);
 	printf("The Largest value is %lf is spot %lf.\n\n", max, maxi);
 		
 	
 	
 }
 	
 	
 void main(void)
 {
 	double summation = 0; /* Sum returned from adding */
 	
 	printf("If you input 5 numbers you can get the average.\n\n");
 	
 	read_and_print_number();
 	
 	summation = add_up_numbers();
 	
 	printf("The sum of your numbers is %.3lf and average is %.3lf.\n\n", 
 			summation, summation/5);
 			
 	find_min_max();
 	
 }
