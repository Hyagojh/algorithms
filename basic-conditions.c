#include <stdio.h>
#include <stdlib.h>

int main (){

/*
  * 1) Write a program that asks for the speed of a car. If it exceeds
  * 80Km/h, display a message saying the user has been fined. In that case, display
  * the amount of the fine, charging R$5 for each km above the allowed speed.
*/
    float speed, fine;

    printf ("Car speed?\n");
    scanf("%f", &speed);

    if (speed >80){
        printf ("You've been fined!");
        fine = speed - 80;
        fine = fine*5;
        printf ("R$ fine: %.2f", fine);
    }

/*
  * 2) Make a program that reads a person's year of birth, calculate the age
  * from her and then show whether or not she can vote.
*/

    int yearBirth, CurrentAge;

    printf ("Year of your birth:");
    scanf ("%i", &yearBirth);

    CurrentAge = 2021 - yearBirth;
    if (CurrentAge >= 16){
        printf ("Your age is: %i and you can vote!", CurrentAge);
    } else {
        printf ("Your age is: %i and you cannot vote!", CurrentAge);
    }

/*
  * 3) Create an algorithm that reads a student's name and two grades, calculates your media and show on screen. 
  * At the end, analyze the average and show if the student had or not a good performance (if it was above the average 7.0).
*/
     float grade1, grade2, average;

     printf ("Note 1:");
     scanf ("%f", &grade1);

     printf ("Note 2:");
     scanf ("%f", &grade2);

     average = (grade1 + grade2)/2;

     if (average >= 7){
         printf ("Final media is from: %.2f and the student is APPROVED", average);
     } else {
         printf ("Final media is from: %.2f and the student is DISAPPROVED", average);
     }

/*
  * 4) Develop a program that reads an integer and shows whether it is PAIR or ODD.
*/
     int number;

     printf("Number:");
     scanf ("%i", &number);

     if (number % 2 == 0){
         printf("PAIR");
     } else {
         printf ("ODD");
     }


     return 0;
}