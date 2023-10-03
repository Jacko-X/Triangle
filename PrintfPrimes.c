/* C Program by Jacqueline Plata for CS1310 9/26/2023
 * Find primes less than a input value */
 
 
 
 #include<stdio.h>



void main(void)
{
	int number, i = 1, j; /* users values; for the loops */
	int isprime = 0; /* flag for is a number prime; 1 = true */
	
	printf("This program prints out primes up to your number.\n");
	
	do{/*input must be positive*/
	printf("Enter a positive integer:  ");
	scanf("%i", &number);
	printf("You entered %i.\n\n", number);
	}while (number < 1);
	
	
	
	printf("Primes less than %i are \n", number);
	while(i<number) /*For each integer number, to check for prime */
	{
		i = i + 1; /*Check next int value */
		isprime = 1; /*Assume i is prime */
		printf("   i=%i number=%i \n",i,number);
		for(j=2;j<i;j++) /*see if any number less than i divides into it */
			if(i%j == 0) /*no remainder means not prime */
				isprime = 0;
		if(isprime ==1) /*the number is prime */
			printf("   %i   ", i);
		

		
	}
	
	
}
