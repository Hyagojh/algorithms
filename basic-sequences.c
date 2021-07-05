#include <stdio.h>
#include <stdlib.h>

int main (){

/*
 * 1) Write a program that displays the message "Hello World!"
*/

    printf ("Hello World!");

/*
 * 2) Make a program that reads a person's name and shows them a welcome message:
 * Example: * 
 * What is your name? John
 * Hi John, it's a pleasure to meet you!
*/
    char name [30];

    printf ("What is your name? \n");
    scanf ("%s", &name);

    printf ("Hi %s, it's a pleasure to meet you!", name);

/*
 * 3) Create a program that reads the name and salary of an employee, showing 
 * in the end a message.
 * Ex:
 * Employee name: Marie
 * Salary: 1850.45
 * The employee Marie has a salary of US$1850.45.
*/

    char name [30];
    float salary;

    printf ("Employee Name: \n");
    scanf ("%s", &name);

    printf ("Salary: \n");
    scanf ("%f", &salary);

    printf("Employee Name: %s \nSalary: %.2f \nThe employee %s has a salary of US$%.2f.", name, salary, name, salary);

/*
 * 4) Develop an algorithm that reads two integers and shows the sum between them.
 * Ex:
 * Enter a value: 8
 * Enter another value: 5
 * The sum between 8 and 5 is equal to 13.
*/

    int n1, n2;

    printf ("Enter a value:\n");
    scanf ("%i", &n1);

    printf ("Enter another value:\n");
    scanf ("%i", &n2);

    printf ("The sum between %i and %i is equal to %i", n1, n2, n1+n2);

/*
 * 5) Make a program that reads a student's two grades in a subject and shows on the
 * the screen your avarage in the course. Ex:
 * Grade 1: 4.5
 * Grade 2: 8.5
 * The average between 4.5 and 8.5 is equal to 6.5
*/

    float grade1, grade2, average;

    printf ("Grade 1:\n");
    scanf ("%f", &grade1);

    printf ("Grade 2:\n");
    scanf ("%f", &grade2);

    average = (grade1 + grade2)/2;

    printf ("The average between %.2f and %.2f is equal to %.2f", grade1, grade2, average);

/*
 * 6) Make a program that reads an integer and shows it's predecessor and its       successor.
 * Ex:
 * Enter a number: 9
 * The predecessor of 9 is 8
 * The successor of 9 is 10
*/
    int number;

    printf ("Enter a nnumber: \n");
    scanf ("%i", &number);

    printf ("The predecessor of %i is: %i\n", number, number - 1);
    printf ("The successor of %i is: %i\n", number, number + 1);

/*
 * 7) Create an algorithm that reads a real number and displays its double and its third part on the screen.
 * Ex:
 * Enter a number: 3.5
 * The double of 3.5 is 7.0
 * The third part of de 3.5 is 1.16666
*/

    float number;

    printf ("Enter a number: \n");
    scanf ("%f", &number);

    printf ("The double of %.1f is: %.1f\n", number, number * 2);
    printf ("The third part of %.1f is: %.5f\n", number, number/3);

/*
 * 8) Develop a program that reads a distance in meters and displays the values * relative in other measures. Ex:
 * Enter a distance in meters: 185.72
 * The distance of 85.7m corresponds to:
 *
 * 0.18572Km       1857.2dm
 * 1.8572Hm        18572.0cm
 * 18.572Dam      185720.0mm
*/

    float distance;

    printf ("Enter a distance in meters: \n");
    scanf ("%f", &distance);

    printf ("%.5f Km\n", distance/1000);
    printf ("%.5f Hm\n", distance/100);
    printf ("%.5f Dam\n", distance/10);
    printf ("%.1f Dm\n", distance*10);
    printf ("%.1f Cm\n", distance*100);
    printf ("%.1f Mm\n", distance*1000);

/*
 * 9) Make an algorithm that reads how much money a person has in their wallet(in R$)
 * and show how many dollars she can buy. Consider US$1,00 = R$3,45.
*/
    float real;

    printf ("How many reais do you have: \n");
    scanf ("%f", &real);

    printf ("You can buy %.2f USD\n", real/3.45);

/*
 * 10) Makes an algorithm that reads the width and height of a wall, calculates and 
 * show the area to be painted and the amount of paint needed for the job, knowing that 
 * each liter of paint paints an area of 2 square meters.
*/
    float area, width, height;

    printf ("Width:\n");
    scanf ("%f", &width);

    printf ("Height:\n");
    scanf ("%f", &height);

    area = width * height;

    printf ("The area to be painted is: %.2f\nThe amount of ink needed for the job is: %.2f", area, area/2);

/*
 * 11) Develop a logic that reads the values of A, B and C from and equation of 
 * second degree and show the delta value.
*/
    float a, b, c, delta;


    printf ("A: ");
    scanf ("%f", &a);

    printf ("B: ");
    scanf ("%f", &b);

    printf ("C: ");
    scanf ("%f", &c);

    delta = (b*b) - (4*a*c);
    printf ("\nO valor de delta �: %.2f", delta);

/*
 * 12) Create a program that reads the price of a product, calculates and displays 
 * yours PROMOTIONAL PRICE, with 5% discount.
*/
    float price, discount;

    printf ("Enter the price of product:\n");
    scanf ("%f", &price);

    discount = price * 0.05;

    printf ("The product, with the promotional price applied is: %.2f", price - discount);

/*
 * 13) Make an algorithm that reads an employee's salary, calculates and shows his 
 * new salary, with a 15% increase.
*/
    float salary, increase;

    printf ("Tells the salary:\n");
    scanf ("%f", &salary);

    increase = salary * 0.15;

    printf ("The salary with a increase is: %.2f", salary + increase);

/*
 * 14) The car rental company needs your help to charge for their services. Write a 
 * program that asks the number of kilometers traveled by a rental car and the number 
 * of days it was rented. Calculate the total price to pay, knowing that the car costs 
 * US$90 per day and US$0.20 per km driven.
*/
    float km, days, calculus;

    printf ("How many days:\n");
    scanf ("%f", &days);

    printf ("How many KM:\n");
    scanf ("%f", &km);

    calculus = (days * 90) + (km * 0.20);

    printf ("Total to pay: %.2f", calculus);

/*
 * 15) Create a program that reads the number of days worked in a month and shows the 
 * salary of an employee, knowing that he works 8 hours a day and earns $25 per hour worked.
*/
    int days;
    float salary;

    printf ("Worked days: \n");
    scanf ("%i", &days);

    salary = (days * 8) * 25;

    printf ("Salary: %2.f", salary);

/*
  * 16) [CHALLENGE] Write a program to calculate the reduction in the life of a
  * smoker. Ask the amount of cigarettes smoked per day and how old is it
  * already smoked. Consider that a smoker loses 10 min of life with each cigarette. 
  * calculate how many days of life a smoker will lose and display the total in days.
*/
    float cigarettesPerDay, years, yearInDays;
    float hoursLostPerDay,result;

    printf ("How many cigarettes are smoked per day:");
    scanf ("%f", &cigarettesPerDay);
    printf ("How many years have you smoked?");
    scanf ("%f", &years);

    hoursLostPerDay = (cigarettesPerDay * 10)/60;
    yearInDays = years * 365;
    result = (hoursLostPerDay *yearInDays)/24;

    printf ("Lost lifetime: %.1f days", result);

return 0;
}