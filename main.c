/*
 * This program allows the user enter as many numbers as he wants.
 * Et wil dislplay a menu and then depending on the user's choice, it will display the sum, the average, the biggest number or the smallest number.

 *Author: Cesar Alejandro Arias Perales
 *Date: October 15th, 2018
 * Mail: A01411995
 */

#include <stdio.h>

// Menu for the options, it will continue displaying until the user decides to exit.
void Menu(){
    printf("\nMenu\n");
    printf("1. Sum.\n");
    printf("2. Average.\n");
    printf("3. Smallest value.\n");
    printf("4, Biggest value.\n");
    printf("0. Exit.\n");
    printf("Choose an option:\n");
}


double Sum(double numbers[], int n){
    double sum = 0;
    // SSum of the numbers entered.
    for(int i = 0; i < n; i++){
        sum += numbers[i];
    }

    return sum;
}
// Function that uses the sum for calculating the average.
double Average(double numbers[], int n){
    return Sum(numbers, n)/n;
}

// Functiojn for the minimum value.
double Minimum(double numbers[], int n){
    double min = numbers[0];

    for(int i = 0; i < n; i++){
        if(min > numbers[i]){
            min = numbers[i];
        }
    }

    return min;
}

// Function for the maximum value.
double Maximum(double numbers[], int n){
    double max = numbers[0];

    for(int i = 0; i < n; i++){
        if(max < numbers[i]){
            max = numbers[i];
        }
    }

    return max;
}

int main() {
    // This is were I declare the variables.
    int n;
    int choice;

    printf("How many numbers are you going to enter?");
    scanf("%d", &n);

    // This is the array.
    double numbers[n];

    // Here I store the values.
    for(int i = 0; i < n; i++){
        printf("%d:", i+1);
        scanf("%lf", &numbers[i]);
    }

    do{
        // This presents the menu and goes to the option selected.
        Menu();
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Sum: %lf\n\n", Sum(numbers, n));
                break;
            case 2:
                printf("Average: %lf\n\n", Average(numbers, n));
                break;
            case 3:
                printf("Minimum value: %lf\n\n", Minimum(numbers, n));
                break;
            case 4:
                printf("Maximum value: %lf\n\n", Maximum(numbers, n));
                break;
            case 0:
                printf("Bye.");
                break;
            default:
                printf("Not valid.");
                break;
        }
    } while(choice != 0);

    return 0;
}