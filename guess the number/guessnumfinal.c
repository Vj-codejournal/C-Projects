#include <stdio.h>
#include <stdlib.h> 
#include<time.h> 

void difficulty1();
void difficulty2();
void difficulty3();



int main() {
    int repeater, difficulty;
    do{
     printf("Select a difficulty level ( 1 to 3)\n");
        scanf("%d", &difficulty);
        if (difficulty == 1){
            difficulty1();
        }
        else if (difficulty == 2){
            difficulty2();
        }
        else if (difficulty==3){
            difficulty3();
        }
        else {
            printf("No such difficulty level yet.\n");
        }
        
        printf("would you like to continue? (enter 1 = yes or 2 = no)\n");
        scanf("%d", &repeater);
    }while(repeater==1);
    
       
    return 0;
}
void difficulty1(){
    int number1, guess1;
    
    int nguesses1=1;
    srand(time(0));      
    number1 = rand()%100 + 1;
    do{
    printf(" Guess the number between 1 to 100\n");
    scanf("%d", &guess1);
    if(guess1>number1){
        printf("Guess lower\n");
    }
     else if (number1>guess1){
        printf("Guess higher\n");
    }
    else{
        printf("You guessed it in %d attempts\n", nguesses1);
        }
    nguesses1++;
    }while(guess1 != number1);
}

void difficulty2(){
    int number2, guess2;
    
    int nguesses2=1;
    srand(time(0));
    number2 = rand()%500 + 1;
    do{
    printf(" Guess the number between 1 to 500\n");
    scanf("%d", &guess2);
    if(guess2>number2){
        printf("Guess lower\n");
    }
     else if (number2>guess2){
        printf("Guess higher\n");
    }
    else{
        printf("You guessed it in %d attempts\n", nguesses2);
        }
    nguesses2++;
    }while(guess2 != number2);
}

void difficulty3(){
    int number3, guess3;
    
    int nguesses3=1;
    srand(time(0));
    number3 = rand()%1000 + 1;
    do{
    printf(" Guess the number between 1 to 1000\n");
    scanf("%d", &guess3);
    if(guess3>number3){
        printf("Guess lower\n");
    }
     else if (number3>guess3){
        printf("Guess higher\n");
    }
    else{
        printf("You guessed it in %d attempts\n", nguesses3);
        }
    nguesses3++;
    }while(guess3 != number3);
}

