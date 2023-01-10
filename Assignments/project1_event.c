/*
    * Name: project1.c 
    purpose: This program will calculate the total cost of a party based on the number of guests, number of hours and the package selected.
    Author: Jiahui Dang

*/

#include <stdio.h>

// function main begins program execution
int main(void){
    // declare variables
    int package;
    int hours;
    int people;
    int hour_charge;
    int total;
    // prompt user to enter package selection
    printf("Please select from three packages: 1, 2, and 3\n");
    printf("Enter package selection: ");
    scanf("%d", &package);
    // check if the package selection is valid
    if (package != 1 && package != 2 && package != 3){
        printf("Invalid selection. Select from 1 to 3.\n");
        return 0;
    }
    else {
    printf("Enter hours: ");
    scanf("%d", &hours);
    // check if the number of hours is valid
    if (hours < 1 || hours > 4){
        printf("Invalid input. Enter a positive number less than or equal to 4 for number of hours.\n");
        return 0;
    }
    // check if the number of guests is valid
    else {
        printf("Enter number of people: ");
        scanf("%d", &people);
        // check if the number of guests is valid
        if (people < 50 && package == 1){
            printf("Not meeting minimum requirement for number of guests.");
            return 0;
        }
        // check if the number of guests is valid
        else if (people > 300 && package == 1){
            printf("Exceeded maximum number of guests.");
            return 0;
        }
        // check if the number of guests is valid
        else if (people < 80 && package == 2){
            printf("Not meeting minimum requirement for number of guests.");
            return 0;
        }
        // check if the number of guests is valid
        else if (people > 300 && package == 2){
            printf("Exceeded maximum number of guests.");
        }
        // check if the number of guests is valid
        else if (people < 30 && package == 3){
            printf("Not meeting minimum requirement for number of guests.");
            return 0;
        }
        // check if the number of guests is valid
        else if (people > 150 && package == 3){
            printf("Exceeded maximum number of guests.");
            return 0;
        }
        // calculate the total cost
        else {
	    // check the package number 
            if (package == 1){
                hour_charge = 50 + (hours - 1) * 25;
		//compare the rental price with the maximum rental price
                if (hour_charge > 95){
                    hour_charge = 95;
                }
                total = hour_charge + people * 25;
                return 0;
            }
	    //check the package number
            else if (package == 2){
                hour_charge = 30 + (hours - 1) * 15;
		//check the rental price with the maximum rental price
                if (hour_charge > 55){
                    hour_charge = 55;
                }
                total = hour_charge + people * 22;
                return 0;
            }
            else {
                hour_charge = 20 + (hours - 1) * 12;
                if (hour_charge > 40){
                    hour_charge = 40;
                }
                total = hour_charge + people * 20;
                return 0;
            }
            
        }

    }
    }
    // print the total cost
    printf("%d\n",total);


    return 0;
}