// birthdate guesing game for single player.


#include <stdio.h>

int main (){
printf("Hello mates, welcome to the birthdate guessing game \n");

printf("Rules- one player should have to type his  birthdate and other sould be guess it\n");

int date ;
int guess;
int tries = 0;
printf("type the date-\n");
scanf("%d",&date);
do{
printf("Enter your guess - \n");
scanf("%d",&guess);
tries++;
if (date<1 || date>31){
    printf("OOPS!check your input again\n ");
}
if(guess==date){
    printf("That's the correct guess\n");
    printf("you took %d attempts to guess\n",tries);
}

else if(guess<date){
    printf("Go higher mate\n");
}

else if(guess>date){
    printf(" go lower buddy\n");
}
   


} while (guess !=date);
return 0;
}