/* C Program by Jacqueline Plata for CS1310 11/08/2023
 * 
 * C Program that translates English sentences into Pig Latin. 
 * It accepts sentences/lines one at a time until the user 
 * types 'stop' or 'Stop' or 'STOP' for the input sentence. 
 * You can assume only letters appear that are either upper
 * lower case, there is no punctuation, and there are less 
 * than 80 characters in a sentence. 
 * Pig Latin is a secret language formed from English by 
 * transferring the initial consonant or consonant cluster 
 * of each word to the end of the word and adding an 'ay'.
 * If the word is only constants or starts with a vowel 
 * nothing will be moved to the end, and 'way' will be added 
 * to the end. Assume y is a consonant for this program. 
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
 #include<string.h>
 
 
 
 /* Translates a word from user's sentence into Pig Latin */
 char PigLatin(char word[]) 
 {

 	int v = 0; /* To get to the first vowel spot */
 	
 	int i; /* Used to get the place in word to print from in for loops */
 	
 	/* To find where there is a vowel in the word or if there's no vowel */
 	while((word[v] != 'a') && (word[v] != 'e') && (word[v] != 'i') 
	      && (word[v] != 'o') && (word[v] != 'u')
		  && (word[v] != 'A') && (word[v] != 'E') && (word[v] != 'I') 
	      && (word[v] != 'O') && (word[v] != 'U'))
 	{
 		v = v + 1; /* Increment v by 1 to check next place for vowel */
 	}
 	
 	/* If the word starts with a vowel or has no vowels */
 	if(v == 0 || v >= strlen(word)) 
 	{
 		printf("%sway ", word);
 	}
 	else
 	{
 		/* To print word starting from first vowel to end of word */
 		for(i = v; i <= strlen(word); i++)
 		{
 			printf("%c", word[i]);	
 		}
 		
 		/* To print out the beginning of the word to the first vowel */
 		for(i = 0; i <= v-1; i++)
 		{
 			printf("%c", word[i]);	
 		}
 		printf("ay ");
 		
 	}		 
 }
 
 
 
 void main(void)
 {
 	
 	char userSentence[81]; /* Holds input string */
 	
 	char *puserWord; /*Point to each word */
 	
 	printf("This program gets translates English sentences into Pig Latin.\n" 
           "It accepts sentences/lines one at a time until the user\n" 
		   "types 'stop' or 'Stop' or 'STOP' for the input sentence\n." 
		   "Assume the only letter appear that are either upper of lower\n"
		   "case, there is no punctuation.\n"
    	   "Pig Latin is a secret language formed from English by\n" 
           "transferring the initial consonant or consonant cluster\n" 
           "of each word to the end of the word and adding an 'ay'.\n"
           "If the word is only constants or starts with a vowel\n" 
           "nothing will be moved to the end, and 'way' will be added\n" 
           "to the end. Assume y is a consonant for this program\n"
		   "Type Stop to exit.\n\n");
 	
 	do{ /* For each sentence until end */
 		
 		printf("\n\nType Stop to exit\n"
		 		"Type in a sentence that is 80 characters or less:  \n  ");
 		gets(userSentence); /* Gets the user's Sentence */
 		printf("\nYou entered\n %s\n",userSentence);
 		
 		puserWord = strtok(userSentence, " "); /* Get first word */
 		
 		printf("\nPig Latin Translation is: ");
 		
 		while(puserWord != NULL) /*while more words */
 		{
 			PigLatin(puserWord); /* Calls the PigLatin function */
 			puserWord = strtok(NULL, " "); /* replaces ' ' with '\0' */
 		}
 		
 		/* Stop the program if Stop, stop or STOP is entered */
 	  }while(strcmp(userSentence, "Stop") != 0 
	   		&& strcmp(userSentence, "stop") != 0 
			&& strcmp(userSentence, "STOP") != 0);	
 }
