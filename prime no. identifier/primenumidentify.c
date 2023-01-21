#include <stdio.h>

int main() {
    int n,i;
    int prime =0 ;// this means in general it is false
    int a;
    do{
    printf("Enter a number\n");
    scanf("%d",&n);


    for (i=2 ; i<n;i++){
        prime=0; //** if this is not here then when we enter a not prime no. prime var is assigned 1 by for loop and when the do while loop is runned again var is already assigned 1 
                    // even if we enter a prime no. as var prime is still 1 it will enter if statement and say it is not prime so starting at each loop we have to make prime var 0 again 
        if (n%i==0){
            prime=1;
            break;
        }
    }

    if(prime ==1){
        printf("this is not a prime number.\n");
    }
    else{
        printf("this is a prime number\n");
    }
    
    printf("would you like to continue? (enter 1 = yes or 2 = no)\n");
    scanf("%d", &a);
    }while(a==1);           
    return 0;
}
// to use char y and n have to do this above scanf as if we use char then when taking input it take enter as a input and not y or n so use fflush(stdin)