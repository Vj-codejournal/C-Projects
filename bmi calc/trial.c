#include <stdio.h>

int main() {
    float height, weight;

    printf("Enter your weight(in Kg)\n");
    scanf("%f",&weight);

    printf("Enter your height(in m)\n");
    scanf("%f", &height);

    float bmi = weight / (height*height);

    printf("Your BMI is %f \n", bmi);

    // if(bmi<=18.5){
    //     printf("You are underweight.\n");
    // }
    // else if (bmi > 18.5 && bmi <25){
    //     printf("You are healthy.\n ");
    // }
    // else if (bmi >= 25 && bmi <30){
    //     printf("You are overweight.\n ");
    // }
    // else if (bmi >= 30 && bmi <35){
    //     printf("You are obese.\n");
    // }
    // else if (bmi >= 35){
    //     printf("You are extremely obese.\n ");
    // }
    // else{
    //     printf("");
    // }
    float i;
    i = weight;
    float bmi2= i / (height*height);
    
    if(bmi2<=18.5){
        while (bmi2<=18.5){
            i++;   
        }
       
    
        printf("you need to increase your weight to %f to be healthy.",i);
    }
    else {
        printf("you are healthy just maintain it!!");
    }
    printf("%f", i);

    return 0;
}

