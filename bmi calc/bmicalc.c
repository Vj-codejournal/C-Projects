#include <stdio.h>

int main() {
    float height, weight;

    printf("Enter your weight(in Kg)\n");
    scanf("%f",&weight);

    printf("Enter your height(in m)\n");
    scanf("%f", &height);

    float bmi = weight / (height*height);

    printf("Your BMI is %f \n", bmi);

    if(bmi<=18.5){
        printf("You are underweight.");
    }
    else if (bmi > 18.5 && bmi <25){
        printf("You are healthy. ");
    }
    else if (bmi >= 25 && bmi <30){
        printf("You are overweight. ");
    }
    else if (bmi >= 30 && bmi <35){
        printf("You are obese.");
    }
    else if (bmi >= 35){
        printf("You are extremely obese. ");
    }
    return 0;
}