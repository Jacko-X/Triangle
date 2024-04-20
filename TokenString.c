/* C Program by Jacqueline Plata for CS1310 10/31/2023
 * get the words from a sentence or string 
 */
 
 
 
 #include<stdio.h>
 #include<string.h>
 
 
 
 void main(void)
 {
 	char words[] = "There is no try"; /*a favorite phrase of yours */
 	char *point; /*point to the start of each word */
 	
 	printf("The sting is: \n %s \n The words are: \n", words);
 	point = strtok(words, " "); /* Get first word */
 	while(point != NULL) /*while more words */
 	{
 		printf("translate  %-14s (word starts at %p)\n", point, point);
 		point = strtok(NULL, " "); /* replaces ' ' with '\0' */
 		
 	}
 	
 }
