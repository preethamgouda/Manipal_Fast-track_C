
#include<assert.h>
#include<stdio.h>
#include"header.h"

int main()
{

    /*--------------------------------------Day 1----------------------------------*/


   //1. Convert Upper case to Lower case.

    printf("\n\n 1. Write a program that converts upper case to lower.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    assert(lower_case('A') == 'a');
    assert(lower_case('b') == 'b');
    assert(lower_case(10) == INVALID);


    //2. Calculate the area of circle.

    printf("\n\n 2. Write a program to calculate the area of circle.\n");
    float radius;
    printf("\n\tEnter the Radius of the Circle : ");
    scanf("%f", &radius);
    printf("\n\tArea of the Circle             : %d \n",circle_area(radius));




    // 6. Fahrenheit to Celsius and Celsius to Fahrenheit conversion.
    printf("\n\n 3. Write a program to convert temperature from Celsius to Fahrenheit and \n    Fahrenheit to Celsius\n");
    float fahrenheit, celsius;
    printf("\n\tEnter Temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);
    printf("\n\tCelsius                         : %f\n",fahrenheit_to_celsius(fahrenheit));
    printf("\n\tEnter Temperature in Celsius    : ");
    scanf("%f", &celsius);
    printf("\n\tFahrenheit                      : %f",celsius_to_fahrenheit(celsius));

    //7. To check whether the given number is odd or even

    printf("\n\n 5. Check if entered number is even or odd.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    assert(odd_or_even(8) == EVEN);
    assert(odd_or_even(13) == ODD);

    //8. To check whether the given number is leap year or not.

    printf("\n\n 6. Check if entered year is leap year or not.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    assert(is_leap_year(2021) == FALSE);
    assert(is_leap_year(2020) == TRUE);
    assert(is_leap_year(2000) == TRUE);
    assert(is_leap_year(1900) == FALSE);
    assert(is_leap_year(-1000) == INVALID);

    //9. Find power of 2^N using left shift operator.

    printf("\n\n 7. WAP to find power of 2^N using left shift operator\n");
    printf("\n\tNote : Tested using Assertion.\n");
    assert(power_of_2(2) == 4);
    assert(power_of_2(4) == 16);
    assert(power_of_2(10) == 1024);
    assert(power_of_2(-1) == INVALID); //returns INVALID if number is negative


    return 0;
}
