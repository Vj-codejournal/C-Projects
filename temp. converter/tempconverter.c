
#include <stdio.h>
void CtoF();
void FtoC();
void CtoK();
void KtoC();
void FtoK();
void KtoF();


int main() {

    printf("Which conversion would you like to use?\n");
    printf("1 --> Celsius to Farenheit\n");
    printf("2 --> Farenheit to Celsius\n");
    printf("3 --> Celsius to Kelvin\n");
    printf("4 --> Kelvin to Celsius\n");
    printf("5 --> Farenheit to Kelvin\n");
    printf("6 --> Kelvin to Farenheit\n");
    int option;
    scanf("%d", &option);

    if (option==1){
        CtoF();
    }
    else if (option==2){
        FtoC();
    }
    else if (option==3){
        CtoK();
    }
    else if (option==4){
        KtoC();
    }
    else if (option==5){
        FtoK();
    }
    else if (option==6){
        KtoF();
    }
    else{
        printf("Please select a valid option of conversion.\n");
    }

 
    return 0;
}
void CtoF(){
    
    float celsius;
    

    printf("Enter Temp. in celsius \n");
    scanf("%f", &celsius);

    printf("It will be %f F", celsius* (9.0 / 5) + 32 );
}
void FtoC(){
    float far;
    printf("Enter Temp. in Farenheit \n");
    scanf("%f", &far);

    printf("It will be %f C", (far - 32)* (5.0/9) );

}
void CtoK(){
    float cel;
    printf("Enter Temp. in celsius \n");
    scanf("%f", &cel);

    printf("It will be %f K", cel + 273.15 );

}
void KtoC(){
    float kel;
    printf("Enter Temp. in Kelvin \n");
    scanf("%f", &kel);

    printf("It will be %f C", kel - 273.15 );

}
void FtoK(){
    float far;
    printf("Enter Temp. in Farenheit \n");
    scanf("%f", &far);

    printf("It will be %f K", (far -32)*(5.0/9)+273.15);

}
void KtoF(){
    float kel;
    printf("Enter Temp. in Kelvin \n");
    scanf("%f", &kel);

    printf("It will be %f F", (kel -273.15)*(9.0/5) + 32);
}