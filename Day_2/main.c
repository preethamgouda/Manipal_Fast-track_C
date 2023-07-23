#include<assert.h>
#include<stdio.h>
#include"header.h"

/*--------------------------------------Day 2----------------------------------*/
int main()
{
    int choice; // Variable for Question 10.
    int units_consumed = 0; // Variable for Question 11.


    //1. Enter a 5 digit number and find the sum of its digits.
    printf("\n\n 1. Enter a 5 digit number and find the sum of its digits.\n    For E.g. if int number = 12345; then sum = 15;\n");
    printf("\n\tNote : Tested using Assertion.\n");

    assert(sum_of_digits(12345) == 15);
    assert(sum_of_digits(0) == 0);
    assert(sum_of_digits(30) == 3);
    assert(sum_of_digits(-1) == INVALID);

    //2. Write a program to reverse the number.
    printf("\n\n 2. Write a program to reverse the number. For E.g. If int number = 12345; then the \n    output reverse = 54321;\n");
    printf("\n\tNote : Tested using Assertion.\n");

    assert(reverse_number(12345) == 54321);
    assert(reverse_number(0) == 0);
    assert(reverse_number(5409) == 9045);
    assert(reverse_number(-50) == INVALID);

    //3. Write a program to count the occurrences of digit in a number
    printf("\n\n 3. Write a program to count the occurrences of digit in a number\n");
    printf("\n\tNote : Tested using Assertion.\n");

    assert(occurrence_of_number(11223,2) == 2);
    assert(occurrence_of_number(11100051,1) == 4);
    assert(occurrence_of_number(58,7) == 0);
    assert(occurrence_of_number(0,1) == 0);
    assert(occurrence_of_number(-32,7) == INVALID);

    //4. WAP to check if a given number is a palindrome
    printf("\n\n 4. WAP to check if a given number is a palindrome. For e.g. 12321, 56788765;\n");
    printf("\n\tNote : Tested using Assertion.\n");

    assert(palindrome_number(12321) == TRUE);
    assert(palindrome_number(56788765) == TRUE);
    assert(palindrome_number(54689) == FALSE);
    assert(palindrome_number(56788) == FALSE);
    assert(palindrome_number(0) == TRUE);
    assert(palindrome_number(-502) == INVALID);

    //5. Generate the first 'N' prime numbers

    printf("\n\n 5. Generate the first 'N' prime numbers.\n");
    assert(generate_n_prime_numbers(5) == TRUE);
    assert(generate_n_prime_numbers(10) == TRUE);
    assert(generate_n_prime_numbers(0) == INVALID);
    assert (generate_n_prime_numbers(-50) == INVALID);

    //6. Write a C program to display and find the sum of the series 1+11+111+....111 up to n.
    //   Take the value of 'n' as input from the user

    printf("\n\n 6. Program to display and find the sum of the series 1+11+111+....111 up to n \n");
    sum_of_series();

    //7. A number is called an Armstrong number if the sum of the cubes of the digits of the
    //   number is equal to the number. For example 153 = 1^3 + 5^3 + 3^3. Write a C
    //   program that asks the user to enter a number and returns if it is Armstrong or not

    printf("\n\n 7. Program that asks the user to enter a number and returns if it is Armstrong or not \n");
    is_armstrong();

    //8. Program to check that the input pair of numbers is amicable
    printf("\n\n 8. Write a C program to check that the input pair of numbers is amicable\n");
    printf("\n\tNote : Tested using Assertion.\n");

    assert(is_amicable(220,284) == TRUE);
    assert(is_amicable(284,220) == TRUE);
    assert(is_amicable(50,600) == FALSE);
    assert(is_amicable(-10, 20) == INVALID);

    //9. Menu driven program to read two integers & find their sum, difference & product

    printf("\n\n 9. Menu driven program to read two integers & find their sum, difference & product \n");
    calculator();

    //10.program to calculate the volume of the following shapes: Cube, Cuboid,
    //   Sphere, Cylinder and Cone. Ask the user which one s/he wants to calculate, and take
    //   the appropriate required inputs. Then print the result. The input should be taken in the
    //   main function and calculations for every solid should be done in a separate function
    //   by passing appropriate arguments.

    printf("\n\n 10. program to calculate the volume of the following shapes: Cube, Cuboid, Sphere, Cylinder and Cone \n");
    printf("\n\tCube                      : 1 ");
    printf("\n\tCuboid                    : 2 ");
    printf("\n\tSphere                    : 3 ");
    printf("\n\tCylinder                  : 4 ");
    printf("\n\tCone                      : 5 ");
    printf("\n\tEnter your choice         : ");
    scanf("%d", &choice);
    volume_of_shapes(choice);







    return 0;
}
