#include <stdio.h>

//Jiahui Dang
//U30621629

int main(void){
    int package;
    int hours;
    int people;
    int hour_charge;
    int total;
    printf("Please select from 3 packages 1, 2 and 3:\n");
    printf("Enter package selection:");
    scanf("%d", &package);
    if (package != 1 && package != 2 && package != 3){
        printf("Invalid selection. Select from 1 to 3\n");
    }
    else {
    printf("Enter hours:");
    scanf("%d", &hours);
    if (hours < 1 || hours > 4){
        printf("Invalid hours. Enter a positive number less than or equal to 4 for number of hours.\n");
    }
    else {
        printf("Enter number of people:");
        scanf("%d", &people);
        if (people < 50 && package == 1){
            printf("Not meeting minimum requirement for number of guests.");
        }
        else if (people > 300 && package == 1){
            printf("Exceeded maximum number of guests.");
        }
        else if (people < 80 && package == 2){
            printf("Not meeting minimum requirement for number of guests.");
        }
        else if (people > 300 && package == 2){
            printf("Exceeded maximum number of guests.");
        }
        else if (people < 30 && package == 3){
            printf("Not meeting minimum requirement for number of guests.");
        }
        else if (people > 150 && package == 3){
            printf("Exceeded maximum number of guests.");
        }
        else { 
            if (package == 1){
                hour_charge = 50 + (hours - 1) * 25;
                if (hour_charge > 95){
                    hour_charge = 95;
                }
                total = hour_charge + people * 25;
            }
            else if (package == 2){
                hour_charge = 30 + (hours - 1) * 15;
                if (hour_charge > 55){
                    hour_charge = 55;
                }
                total = hour_charge + people * 22;
            }
            else {
                hour_charge = 20 + (hours - 1) * 12;
                if (hour_charge > 40){
                    hour_charge = 40;
                }
                total = hour_charge + people * 20;
            }
            
        }

    }
    }
    printf("%d",total);


    return 0;
}