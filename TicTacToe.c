/* C Program for CS1310 by Jacqueline Plata 10/24/2023
 * 
 * Lets two people play tic-tac-toe using a char ttt[3][3]
 * to represnt the board state and globals for the
 * player, a char to hold ‘X’ or ‘O’, row and col integers for indexes, 
 * and an integer to count the number of moves completed. 
 * Shows the game board for each move with a separate key for the user to
 * type one digit to say what spot to take in the board.
 * At the end of a game, say who won or that it is a tie. 
	
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



char ttt[3][3]; /* Represent the board */

char player = 'O'; /* O for the player  */

int move; /* used to hold 0-9 the users enters*/

int row, col; /* Index into ttt */

int count; /* Counts moves players make to tell if a tie */

int win = 0; /* Start it not a win */



void PrintBoardKey(void){ /* Prints out the Key Board with spots numbered 1 - 9 */
	
	printf("\n This is the Key Board\n");
	printf("    %c  |   %c   |  %c  \n", '1','2','3');
	printf(" ------|-------|------\n");
	printf("    %c  |   %c   |  %c  \n", '4','5','6');
	printf(" ------|-------|------\n");
	printf("    %c  |   %c   |  %c  \n\n", '7','8','9');
}



void MakeBoard(){ /* Initialize the ttt array setting all the spots to ' ' */

	int i,j; /* Index into ttt array */
	
	for(i= 0; i < 3; i++)/* Iterate through the three rows of the ttt array */
		for(j = 0; j < 3; j++) /* Iterate through the three columns of the ttt array */
				ttt[i][j]= ' ';	/* Sets each spot in the ttt array to ' ' */
}



void UpDateBoard(){ 

	int a,b; /* Index into ttt array */
	
	printf("\n This is the Player Board\n");
	for(a = 0; a < 3; a++){ /* Iterate through the three rows of the ttt array */ 
		for(b = 0; b < 3; b++){ /* Iterate through the three columns of the ttt array */
			printf("   %c", ttt[a][b]);
			if( b < 2) /*Prints out Players Board vertical lines*/
				printf("   |");
		}
		if(a<2) /*Prints out Players Board horizontal lines*/
			printf("\n ------|-------|------\n");
	}
	printf("\n\n");	
}



void GetMove(){ /* Gets the move the player enters */
	
	do{/* Find the move place then stop when reaches while because move doesn't match the condition */
	
		printf("Type in the number of the spot you want to put your mark: ");
		scanf("%i", &move); /* Read in players move */
		
		/* Finds where in the ttt array the player wants to put their symbol */
		switch(move){ 
			case 1: row = 0, col = 0;
				break;
			case 2: row = 0, col = 1;
				break;
			case 3: row = 0, col = 2;
				break;
			case 4: row = 1, col = 0;
				break;
			case 5: row = 1, col = 1;
				break;
			case 6: row = 1, col = 2;
				break;
			case 7: row = 2, col = 0;
				break;
			case 8: row = 2, col = 1;
				break;
			case 9: row = 2, col = 2;
				break;
			default:
				printf("Not a vaild move\n"); 
				break;	
		}	
		/* To find when there is a symbol already in the spot the player chose */
		if( move > 0 && move < 10 && ttt[row][col] != ' ') 
		{
			printf("This spot is taken.\n\n");
			
		}
	}while( move < 1 || move > 9 || ttt[row][col] != ' ');
	
}



/* Check if a player has their symbol three in a row/column/diagional */
int CheckWin(){	
	
	if(ttt[0][0] == player && ttt[0][1] == player && ttt[0][2] == player ||
	   ttt[1][0] == player && ttt[1][1] == player && ttt[1][2] == player ||
	   ttt[2][0] == player && ttt[2][1] == player && ttt[2][2] == player ||
	   
	   ttt[0][0] == player && ttt[1][0] == player && ttt[2][0] == player ||
	   ttt[0][1] == player && ttt[1][1] == player && ttt[2][1] == player ||
	   ttt[0][2] == player && ttt[1][2] == player && ttt[2][2] == player ||
	   
	   ttt[0][0] == player && ttt[1][1] == player && ttt[1][2] == player ||
	   ttt[0][2] == player && ttt[1][1] == player && ttt[2][0] == player)
	  {
	  return 1; /* If a player wins return 1 to main */
	}	
	return 0; /* If a player wins return 0 to main */
}

	

void main(void)
{

	/*Prints Instructions */
	printf("Welcome to Tic-Tac-Toe.\n\n"  
           "Tic-Tac-Toe is a two player game played on a 3x3 grid where one player \n"
           "is X, and the other is O. Each player takes turns choosing a spot \n"
           "on the 3x3 grid to put their X or O. The first player to get three of \n" 
           "Their marks in a row, which can be up, down, across, or diagonally, \n"
           "is the winner. When all nine spots are full, the game is over. \n"
           "If nobody has their marks in a row, when the grid is full, it is a tie.\n\n");
	
	MakeBoard(); /* Calls function that initializes the ttt array */
	
	printf("Below is the tic-tac-toe Key board with numbers 1-9 that correspond to\n"
		   "the spots on the players tic-tac-toe board.\n\n");
	
	PrintBoardKey();/* Calls function that prints the Key board */
	
	printf("Below is a players tic-tac-toe board where you will choose which spot you\n"
	       "want to mark by typing in the corresponding number on the key board.\n\n");

	UpDateBoard(); /* Calls function that prints the players board*/
	
	
	while(win == 0 && count < 9)
	{
		PrintBoardKey(); /* Calls function that prints the Key board */
		
		UpDateBoard(); /* Calls function that prints the players board*/
	
		GetMove(); /* Calls function that gets the players move */
	
		ttt[row][col] = player; /* Up dates the ttt array with an X or O */
		count = count + 1; /* counts players moves */
		
		UpDateBoard(); /* Calls function that prints the players board */
	
		win = CheckWin(); /* Calls function that checks if a player won and holds answer in variable win*/

		if(win == 1) /* If win is 1 a player won */
		{
			printf("\nPlayer '%c' Won\n", player);
		}
		else if (count == 9) /* If count is 9 the board is filled and still no winner so it is a tie */
		{
			printf("This is a tie.");
		}
		
		/* Switches players symbol */
		if(player == 'O') 
			player = 'X';
		else
			player = 'O';
	}

}











