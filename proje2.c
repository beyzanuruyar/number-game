#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int guess;
    
    srand(time(NULL));

    int number = rand() % 1000 + 1;

    // beyza

    // new 

    
    do
    {
        printf("I chose a number between 1 and 1000, guess what it is?\n");
        scanf("%d", &guess);
        if(number<guess){
            printf("number is smaller than your choose\n");
        }

        else if(number>guess){
            printf("number is bigger than your choose\n");
        }
        if (number==guess)
        {
            printf("Congratulations! You guessed correctly.\n");
        }
        
    } while (guess!=number);
    
     return 0;

}