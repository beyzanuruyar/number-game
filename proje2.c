#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    
    srand(time(NULL));

    int rights=10;
    int tries=0;
    int choice;
    int max;
     int guess;
     printf("you have 10 rights lets go start\n");

    printf("choose difficulty\n");
    printf("1-Easy (1-100)\n ");
    printf("2-medium (1-500)\n");
    printf("3-hard (1-1000)\n");
     scanf("%d",&choice);

     if (choice==1)
     max=100;
     else if (choice==2)
     max=500;

     else if(choice==3)
     max=1000;

      int number = rand() %max + 1;

    do
    {
        tries++;
        rights--;
        printf("I chose a number between 1 and %d, guess what it is?\n",max);
        scanf("%d",&guess);
        if(number<guess){
            printf("number is smaller than your choose\n");
        }

        else if(number>guess){
            printf("number is bigger than your choose\n");
        }
        if (number==guess)
        {
            printf("Congratulations! You guessed correctly.\n");
            printf("you guess is %d\n", tries);
        }
        if (rights==0){
            printf("GAME OVER");
            break;
        }
        
    } while (guess!=number);
    
     return 0;

}