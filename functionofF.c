/* C Program by Jacqueline Plata for CS1310 9/12/2023
 * Get the value of f(x) = (3x^2 + 2x +1)*/
 
 
 
 #include<stdio.h>
 
 
 
 void findfofx(int x) /* find f of input where f(x) is as above */
 {
 	printf("\n f(%i) = %i.\n\n", x, 3*x*x+2*x+1);
 	
 }
 
 
 
 void main(void)
 {
 	int num; /* Input from user*/
 	
 	printf("This program finds f(x) = 3x^2 + 2x +1 for your x.\n\n");
 	printf("What integer do you want for f(x)?  ");
 	scanf("%d", &num);
 	printf("You entered %d.\n\n", num);
 	
	 
	 findfofx(num);	
	 findfofx(10);
	 findfofx(num - 20);
 }
