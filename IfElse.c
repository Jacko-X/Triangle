/*C Program by Jacqueline Plata for CS1310 8/5/2023
 * Chack Input >0
 */
 
 
 
 #include<stdio.h>
 
 
 
 void main(void)
 {
 	double num = 0;
 	
 	printf("Check for a valid value.\n\n");
    printf("Input a distance or length: ");
    scanf("%lf", &num);
    printf("You typed %lf. \n", num);
    
    if(num <= 0) /*check for positive number*/
         printf("%lf must be positive for a length.\n",num);
    else /*num must be positive */
        {
         printf("%lf is a good value\n", num);
         printf("You can divide by %lf such as 1/%lf = %lf.\n\n",
                 num, num, 1.0/num);
             
        }
 	
 	
 }
