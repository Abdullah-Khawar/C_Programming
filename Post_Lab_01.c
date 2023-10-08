// Name --> Abdullah Noor
// Roll No. --> Bcsf22m025
// Subject --> Programming Fundamental lab 
// Date --> 08-10-2023

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>  // Include the standard library
#include <time.h>    // Include the time library for generating random numbers


// Program_01 --> Program that takes two integers as input and print their sum

void Print_Sum(){

//Taking Inputs and storing it in sum.
int integer_1;
int integer_2;

    printf("%s", "Enter your first number: ");
    scanf(" %d", &integer_1);

    printf("%s", "Enter your second number: ");
    scanf("%d", &integer_2);

int sum;
    sum = integer_1 + integer_2;

    printf("The sum of %d and %d is: %d \n",integer_1, integer_2, sum);

} // End of 1st program.


          // <------------------------------------------------------------------> //


// Program_02 --> Program that take character as input and then prints it

void Print_Char(){

//Taking character as an input and printing it
char character;

    printf("%s","Enter a character: ");
    scanf(" %c",&character);

    printf("Your Entered character is: %c \n",character);

} // End of 2nd program.


          // <------------------------------------------------------------------> //


// Program_03 --> Program that takes floating-point number and then prints it upto 2 decimal places

void Print_Float(){

//Taking floating-point number input and printing upto 2 decimal places
float float_num;

    printf("%s","Enter any floating_point number: ");
    scanf(" %f",&float_num);

    printf("Floating_Point number upto 2 decimal places is: %.2f \n",float_num);

} // End of 3rd program.


            // <------------------------------------------------------------------> //


// Program_04 --> Program that converts Fahrenheit to Celsius

void Far_To_Cel(){

// Formula -->  Celsius = (Fahrehheit - 32)/1.8

float Fahrenheit_Temp;
    printf("%s","Enter temperature in Farenheit: ");
    scanf("%f",&Fahrenheit_Temp);

float celsius;
    celsius = (Fahrenheit_Temp - 32)/1.8;
    printf("Temperature in Celcius is: %.2f \n",celsius);

} // End of 4th program.


          // <------------------------------------------------------------------> //


// Program_05 --> Program to calculate interest based on principle amount, rate and time.

void Print_Interest(){

//Taking inputs of Principle amount, interest rate and time.
float principle_amount;
float interest_rate;
float time;

    printf("Enter the Principal_amount: ");
    scanf(" %f", &principle_amount);

    printf("Enter the Interest_rate: ");
    scanf(" %f", &interest_rate);

    printf("Enter Time period in Years: ");
    scanf(" %f", &time);

// calculating interest using formula --> I = (PIT)/100
float Interest_Calculator;

    Interest_Calculator = (principle_amount * interest_rate * time) / 100;
    printf("Interest_based Calculation of given Data is: %.2f \n", Interest_Calculator);

} // End of 5th program.


            // <------------------------------------------------------------------> //


// Program_06 --> Program to check whether a given year is a leap year or not?

void Check_Leap_Year(){

// Declaring year and taking its input from user
int year;
    printf("%s", "Enter any year: ");
    scanf("%d", &year);

// Checking the leap year using if-else statement using logic of leap year finding
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        printf("%d is a leap Year \n", year);
    }
     else{
        printf("Oops! %d is not a leap year \n", year);
    }

} // End of 6th program.


           // <------------------------------------------------------------------> //


// Program_07 --> Program that takes 3 integers and print the largest of them.

void Largest_Integer(){

//Taking input of three numbers from user and storing them
int a;
int b;
int c;

    printf("%s","Enter the first number a: ");
    scanf("%d",&a);

    printf("%s","Enter the second number b: ");
    scanf("%d",&b);

    printf("%s","Enter the third number c: ");
    scanf("%d",&c);

// Comparing numbers and print the largest by using if-else statements
// Picking one number and compare with other two numbers
// The greater will be the result
    
    if( a == b && b == c) {
        printf("All numbers are same! \n");
    }

    else if(a > b && a > c) {
        printf("a = %d is greater than other two! \n",a);
    }

    else if(b > a && b > c){
        printf("b = %d is greater than other two! \n",b);
    }

    else{
        printf("c = %d is greater than other two! \n",c);
    }

} // End of 7th program.


           // <------------------------------------------------------------------> //


// Program_08 --> Program that checks whether given character is a vowel or consonant

void Check_Vowel_Consonant(){

// Taking alphabet as an input and store it
char alphabet;
    printf("%s", "Enter a character: ");
    scanf(" %c", &alphabet);

// Checking the vowel condition using if statement
// Consonant condition will be handled automatically

if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'){
     printf("Your entered character is a VOWEL \n");
}

else if (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U'){
     printf("Your entered character is a VOWEL \n");
}

else{
     printf("Your entered character is a CONSONANT \n");
}

} // End of 8th program. 


          // <------------------------------------------------------------------> //


// Program_09 --> Program tha reads a date and print in format "DD/MM/YYYY"

void Print_Date(){

//taking inputs of date, month and year and storing them
 int date;
 int month;
 int year;

    printf("%s","Enter date upto 1-31 and in ** format: ");
    scanf(" %d", &date);

    printf("%s","Enter month upto 1-12 and in ** format: ");
    scanf(" %d", &month);

    printf("%s","Enter year in **** format: ");
    scanf(" %d", &year);

// printing in standard format
if (date >= 1 && date <= 31 && month >= 1 && month <= 12 && year >= 0001){
    printf("Date in mentioned format is: %d/%d/%d \n", date, month, year);
}

else{
     printf("Please enter a valid date! \n");
}



} // End of 9th program.


          // <------------------------------------------------------------------> //


// Program_10 --> Program that takes floating point number and prints it in scientific notation

void Print_Notation(){

//Taking floating point number and store it
float num;
    printf("%s","Enter any floating_point number: ");
    scanf("%f",&num);

// Number in scientific Notation is
    printf("Given number in scientific Notation is %E \n",num);  

} // End of 10th program


            // <------------------------------------------------------------------> //


// Program_11 --> Program that takes student's marks and print their grades 
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F

void Print_Grade(){
//taing input from user between 1 to 100
float marks;

// Using while loop, make program keep running, until user enters -1 to stop it 
bool Execute = true;

    while(Execute)

    {
        printf("%s","Enter your marks between 1-100! Press -1 to exit: ");
        scanf(" %f", &marks);
        
        // Performing Grade Decisions
        if( marks >= 90 && marks <= 100){
            printf("%s","Your grade is A \n");
        }
        else if(marks>=80 && marks<=89){
            printf("%s","Your grade is B \n");
        }
        else if(marks >= 70 && marks <= 79){
            printf("%s","Your grade is C \n");
        }
        else if(marks >= 60 && marks <= 69){
            printf("%s","Your grade is D \n");
        }
        else if(marks >= 0 && marks <= 59){
            printf("%s","Sorry! You Failed Better luck next time \n");
        }
        else if(marks == -1){
            Execute = false;
        }
        else{
            printf("%s","Enter Valid marks!!\n");
        }
    }

} // End of 11th program.


            // <------------------------------------------------------------------> //


// Program_12 --> Program that takes 2 input numbers and operators(+,-,*,/) and perform operation

void Calculator(){

// Taking 2 numbers from user
int num_1, num_2;

    printf("%s","Enter first integer: ");
    scanf(" %d", &num_1);

    printf("%s","Enter Second integer: ");
    scanf(" %d", &num_2);

// Taking required Operation from user
char operator;

    printf("%s","Enter Operation (-,+,/,*)");
    scanf(" %c", &operator);

// Declaring a "result" variable for storing the operations result
int result;

// Using if-else statement to determine which operator is enetered by the user
// And perform its operation to obtain "result"
    if(operator == '-'){
        result = num_1 - num_2;
    }

    else if(operator == '+'){
        result = num_1 + num_2;
    }

    else if(operator == '/'){
        result = num_1 / num_2;
    }

    else if(operator == '*'){
        result = num_1 * num_2;
    }

    else{
          printf("Enter a valid operator! (+,-,/,*)? \n");
     }

    printf("Result is: %d \n", result);

} // End of 12th program.


          // <------------------------------------------------------------------> //


// Program_13 --> Program that reads traffic light colors and show the corresponding message
// green, red, yellow colors are allowed.

void Traffic_Light(){

//Initializing a string array of 8 characters.
char Light[8];

//Taking input from user which traffic light is currently ON.
    printf("%s","Enter Traffic light color (green,red,yellow)? : ");
    scanf(" %s",Light);

// Using comparison function of string "strcmp" compare the entered input with the already defined string
    if(strcmp(Light, "green") == 0){
        printf("LET'S GO \n");
    }

    else if(strcmp(Light, "red") == 0){
        printf("STOP \n");
    }

    else if(strcmp(Light, "yellow") == 0){
        printf("SLOW DOWN FOR STOP \n");
    }
    
    else{
        printf("Please enter a valid color! \n");
    }

} // End of 13th program 


          // <------------------------------------------------------------------> //


// Program_14 --> Program that calculates factorial of a number

void Print_Factorial(){

// takimg user input -- a number
 int num;
    printf("%s","Enter a number: ");
    scanf(" %d",&num);

// initialize answer with 1 
unsigned long product = 1;

// Multiply every number with its previous one, till loop encounters num = 1.

    for(int i = num; i>=1; i--){
        product = product * i;
    }

    printf("Factorial is: %ld \n", product);

} // End of 14th program


          // <------------------------------------------------------------------> //


// Program_15 --> Program that takes integers and print its reverse integer

void Print_Reverse_Integer(){

// takimg user input -- a number
 int num;
    printf("%s","Enter a number: ");
    scanf(" %d",&num);

// digit -- keep track of number when the number is shrinking and shrinking till 0
int digit;

// reverse = 0 for firstly obtaining the 'last digit' in multiplication 
int reverse = 0;

// loop continues till number is shrinked to '0'
    while (num != 0)
    {
     //obtaining last digit every time
        digit = num % 10;
     //making reverse number every time
        reverse = reverse * 10 + digit;
     //shrinking number every time
        num /= 10;
    }

printf("Reversed number is: %d \n", reverse);

} // End of 15th program.



         // <------------------------------------------------------------------> //


// Program_16 --> Program that prints right angled triangle
/*
*
**
***
****
*****
*/

void Print_right_angle(){


// Outer loop for rows (1 to 5)
    for (int row = 1; row <= 5; row++) {

           // Inner loop for columns (1 to row)
        for (int col = 1; col <= row; col++) {

             // Print an asterisk '*' character
            printf("%s", "*");
        }

      // Move to the next line after each row
        printf("%s", "\n");
    }

} // End of 16th program.


                   // <------------------------------------------------------------------> //


// Program_17 --> Program that checks whether the enetered number is a palindrome or not?

void Palindrome_Check(){

// Taking number input.
int num;
    printf("%s", "Enter any number: ");
    scanf("%d", &num);

// Storing the number before applying reverse operation for future comparing
int org_num = num;

// Reverse the number
int digit;
int reverse = 0;

    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

// After reversing check whether the "number" is equal to the "reverse number"  
if(org_num == reverse){ 
        printf("%s", "Given number is a Palindrome! \n");
    }
    else{
        printf("%s", "Given number is Not a Palindrome! \n");
    }

} // End of 17th program.



                   // <------------------------------------------------------------------> //


// Program_18 --> Program that develops a number-guessing game between 1 and 100 and user guesses it

void Number_Guessing(){

// Seed the random number generator with the current time
    srand(time(0));  

// Declare integer variables 'number' and 'guessed_num'
int number;
int guessed_num; 

// Generate a random number between 1 and 100 and store it in 'number'
    number = rand() % 100 + 1;

// Initialize the variable 'chances' to 10
int chances = 10; 

    // Start a while loop that runs while 'chances' is greater than 0
    while (chances--) {

//Taking input from the user
        printf("%s", "Guess a number between 1 to 100: "); 
        scanf(" %d", &guessed_num); 

// Check if 'guessed_num' is greater than 'number'
        if (guessed_num > number) {
            printf("%s", "Too high! \n"); // Display "Too high!" if the guess is too high
        }

// Check if 'guessed_num' is less than 'number'
        else if (guessed_num < number) {
            printf("%s", "Too low! \n"); // Display "Too low!" if the guess is too low
        }

// Check if 'guessed_num' is equal to 'number'
        else if (guessed_num == number) {
            printf("You Guessed correctly! Number is %d \n", number); 
            printf("You took %d chances to guess the number", 10 - chances); 
            break; 
        }
        
// Check if there are no more chances left
        if (chances == 0) {
            printf("Game over! The correct number is: %d \n", number); 
     // Exit the loop because there are no more chances left
     break;
        }

// Display the number of chances left        
     printf("%d chances left \n", chances);
    }
    
} // End of 18th program.


               // <------------------------------------------------------------------> //


/* Program_19 --> program that prints the numbers from 1 to 100. For multiples of 3, 
print "Fizz" instead of the number. For multiples of 5, print "Buzz" 
instead. For numbers that are multiples of both 3 and 5, print "FizzBuzz."
*/

void Fizz_Buzz(){

// starting loop from 1 until 100
  for(int i = 1; i <= 100; i++){

// If number is multiple of 3 and 5 then print "FizzBuzz"
        if(i%3 == 0 && i%5 == 0){
            printf("%s","FizzBuzz \n");
        }

// If number is multiple of 3 then print "Fizz" 
        else if(i%3 == 0){
            printf("%s", "Fizz \n");
        }

// If number is multiple of 5 then print "Buzz"        
        else if(i%5 == 0){
            printf("%s", "Buzz \n");
        }
// Otherwise display the number        
        else{
            printf("%d \n", i);
        }
    }

} // End of 19th program.


            // <------------------------------------------------------------------> //


// Program_20 --> Program that prints Diamond Pattern.
/*
  *
 ***
*****
 ***
  *
*/

void Print_Diamond(){

    // Upper part of the pattern (inverted pyramid)
    for (int rows = 1; rows <= 3; rows++) {           // Outer loop for rows (1 to 3)
       
        for (int col = 1; col <= 3 - rows; col++) {   // Loop to print leading spaces (decreasing with each row)
            printf(" ");                             // Print a space
        }
       
        for (int col = 1; col <= 2 * rows - 1; col++) { // Loop to print asterisks (increasing with each row)
            printf("*");                              // Print an asterisk
        }
        printf("\n");                                  // Move to the next line after each row
    }

    // Lower part of the pattern (pyramid)
    for (int rows = 2; rows >= 1; rows--) {    // Outer loop for rows (2 to 1)
        
        for (int col = 1; col <= 3 - rows; col++) {   // Loop to print leading spaces (increasing with each row)
            printf(" ");                             // Print a space
        }

        for (int col = 1; col <= 2 * rows - 1; col++) { // Loop to print asterisks (decreasing with each row)
            printf("*");                              // Print an asterisk
        }
       
        printf("\n");                                  // Move to the next line after each row
    }

} // End of 20th program.






              
int main(){


/*

// Program_01 --> Calling Function
Print_Sum();
           // <------------------------------------------------------------------> //
// Program_02 --> Calling Function
Print_Char();              
          // <------------------------------------------------------------------> //
// Program_03 --> Calling Function
Print_Float();
          // <------------------------------------------------------------------> //
// Program_04 --> Calling Function
Far_To_Cel();
          // <------------------------------------------------------------------> //
// Program_05 --> Calling Function
Print_Interest();
          // <------------------------------------------------------------------> //
// Program_06 --> Calling Function
Check_Leap_Year();
          // <------------------------------------------------------------------> //
// Program_07 --> Calling Function
Largest_Integer();
          // <------------------------------------------------------------------> //
// Program_08 --> Calling Function
Check_Vowel_Consonant();
          // <------------------------------------------------------------------> //
// Program_09 --> Calling Function
Print_Date();
          // <------------------------------------------------------------------> //
// Program_10 --> Calling Function
Print_Notation();
         // <------------------------------------------------------------------> //
// Program_11 --> Calling Function
Print_Grade();
          // <------------------------------------------------------------------> //
// Program_12 --> Calling Function
Calculator();
          // <------------------------------------------------------------------> //
// Program_13 --> Calling Function
Traffic_Light();
          // <------------------------------------------------------------------> //
// Program_14 --> Calling Function
Print_Factorial();
          // <------------------------------------------------------------------> //
// Program_15 --> Calling Function
Print_Reverse_Integer();
         // <------------------------------------------------------------------> //
// Program_16 --> Calling Function
Print_right_angle();
        // <------------------------------------------------------------------> //
// Program_17 --> Calling Function
Palindrome_Check();
        // <------------------------------------------------------------------> //
// Program_18 --> Calling Function
Number_Guessing();
         // <------------------------------------------------------------------> //
// Program_19 --> Calling Function
Fizz_Buzz();
         // <------------------------------------------------------------------> //
// Program_20 --> Calling Function
Print_Diamond();
*/

// CALL HERE :)
Print_Notation();

                                                //END//

return 0;
}

