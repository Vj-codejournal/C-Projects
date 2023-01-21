#include <stdio.h>

int main() {
    int n;
    printf("Enter the multiplication table of the number you want:");
    scanf("%d", &n);


    int mul[10];
    for (int i=0;i<10;i++){// this loop is to store values in array
        mul[i] = n*(i+1); // +1 as start from 0
        
    }

    for (int i=0;i<10;i++){
        printf("%d X %d = %d\n",n, i+1,mul[i]);
    }
    return 0;
}