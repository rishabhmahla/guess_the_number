#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(0));
	int thenum1=rand()%100+1,userinput1,userinput2,guess1=0,guess2=0;
	printf("Player 1 :\n Enter ur guess:\n");
	;
	do{
		scanf("%d",&userinput1);
		if(userinput1>thenum1){
			printf("Please enter lower Value\n");
		}
		else if(userinput1<thenum1){
			printf("Please enter higher Value\n");
			
		}
		else {
			printf("Congratulations you guessed in %d guesses, \n",guess1);
		}
		guess1++;
	}
	while(userinput1 != thenum1);
	srand(time(0));
	int thenum2=rand()%100+1;
	printf("Player 2 :\n Enter ur guess:\n");
	
	do{
	    scanf("%d",&userinput2);
		if(userinput2>thenum2){
			printf("Please enter lower Value\n");
		}
		else if(userinput2<thenum2){
			printf("Please enter higher Value\n");
			
		}
		else {
			printf("Congratulations you guessed in %d guesses, \n",guess2);
		}
		guess2++;
	}
	while(userinput2 != thenum2);
	if(guess1>guess2)
	{
		printf("Game Over.Player 2 wins!\n");
	}
	else if(guess2>guess1)
	{
		printf("Game Over.Player 1 wins!\n");
	}
	else
	{
		printf("Game over! It is a draw");
	}
	
    
	
	
	return 0;
}