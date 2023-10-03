/* C Program by Jacqueline Plata for CS1310 9/12/2023
 *
 * Gives instructions with a triangle graphic and ask for 3 lengths
 * of the sides of a triangle in cm. 
 * Calculate the area of the triangle using 
 * Heron's formula : A =((s(s-a)(s-b)(s-c)))^1/2
 * Where s = 1/2(a+b+c); a, b, and c are lengths of the sides
 * If any of the lengths are not positive, tell the user, and if the
 * 3 lengths do not make a triangle, tell the user; do not do any
 * calculations unless the lengths are valid. Using the Triangle 
 * Inequality Theorem to figure out if the lengths make a Triangle.
 
          !~                       
 ^:      !@&!      :^               
 ~CSP:  7#@@#!  :JVK~               
  .C@P  .^@&^.  J@P.                
   .S@^  :@&:  ^@V.                  
    ^@P  :@&:  K@^                  
     G@: ^@&: :@G                   
     J@BM#@@#MN@J                   
     ^5!~!@&!~!5^                   
         :@&:                       
         ^@@^                       
         ***^       
   */
   
   
   
   #include<stdio.h>
   #include<math.h> /* Needed to use the square root function */
   
   
   
   void main(void)
   {
   	double a,b,c; /* Holds user's sides of triangle */
   	double s; /* Holds the semi-perimeter */
   	double Area; /* Holds Area of Triangle */
   	
   	
   	
   	printf("This C program will tell you if the three side lengths\n"
   	       "you enter will make a triangle. If so, it will also\n"
   	       "tell you the area of the triangle\n");
   	
   	printf("        /\\\n"
           "       /  \\\n"
           "      /    \\\n"
           "     /      \\\n"
           "    /        \\\n"
           "   /          \\\n"
           "  /            \\\n"
           " /______________\\\n");
    
	printf("Please enter a positive triangle length:  ");
	scanf("%8lf", &a); /* Gets side a */
	printf("The length you entered is %8lf\n\n", a);
	
	printf("Please enter a positive triangle length:  ");
	scanf("%8lf", &b);  /* Gets side b */
	printf("The length you entered is %8lf\n\n", b);
	
	printf("Please enter a positive triangle length:  ");
	scanf("%8lf", &c);  /* Gets side c */
	printf("The length you entered is %8lf\n\n", c);  
	
	
	
	   if(a<=0 || b<=0 || c<=0) /* Checks if the sides are positive and not zero*/
		{                     
			printf("The side length entered is a negative number or zero\n"
			       "Please type a positive number\n");	
		
		} /* Uses the Triangle Inequality Theorem to check if the three sides make a triangle */
	 else if(a + b > c && a + c > b && b + c > a)/* Two sides > other side for all 3 sides */
		{
			printf("These side lengths are vaild to make a triangle");
			s = (a + b + c) * 1/2; /* Calculations to find the semi-perimeter */
			
			/* Calculations to find the Area using Heron's formula */
			Area = sqrt((s*(s-a)*(s-b)*(s-c))); 
			printf("\nThe Area for this triangle is %lf sq units", Area);
					
		}
	 else
		{
			/*If Triangle Inequality Theorem determines the sides don't make a triangle */
			printf("The side lengths entered do not make a triangle\n");
			printf("Not a Triangle"); 	
				
		}
		
   }
   
