#include <stdio.h>
#include <stdlib.h> //need for random number generator
#include<time.h> //these header files need to be added
int main() {
    int number;
    srand(time(0));   //we initialize it so that it generate new number each time
    number = rand()%100 + 1; //if we want the number to be  betwn 1 to 100 div 100 remainder will be from 0 to 99 so +1
    printf("The number is  %d", number);
    return 0;
}

//ask why num randomly generated increasing only??