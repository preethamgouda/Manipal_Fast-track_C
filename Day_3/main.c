#include<assert.h>
#include<stdio.h>
#include"header.h"

/*--------------------------------------Day 3----------------------------------*/

int main()
{   // there is a glitch in the result display window , for generating pattern question , if we we give rows number >4 it won't display the next answer
    //just be invisible although code is correct . if anyone can find solutions for this pull and commit
    //variables
    int base,exponent;

    //1. WAP to convert a binary number to decimal and vice versa.
    printf("\n\n 1. WAP to convert a binary number to decimal and vice versa.\n");
    printf("\n\tNote : Tested using Assertion.\n");

    // Binary to Decimal
    assert(binary_to_decimal(101) == 5);
    assert(binary_to_decimal(1111) == 15);
    assert(binary_to_decimal(123) == INVALID);
    assert(binary_to_decimal(-20) == INVALID);

    // Decimal to Binary
    assert(decimal_to_binary(5) == 101);
    assert(decimal_to_binary(15) == 1111);
    assert(decimal_to_binary(0) == 0);
    assert(decimal_to_binary(-52) == INVALID);

    //2. Generate a sequence of numbers such that every number in the sequence is the sum of
    //   the previous three numbers. The first three numbers are 0,0,1.

    printf("\n\n 2. Generate a sequence of numbers such that every number in the sequence is the\n    sum of the previous three numbers\n");
    assert(generate_sum_of_previous_three_numbers(9) == 1);
    assert(generate_sum_of_previous_three_numbers(3) == 1);
    assert(generate_sum_of_previous_three_numbers(0) == INVALID);

    //3. WAP to print the following sketch by taking in N as number of rows

    printf("\n\n 3. WAP to print the following sketch by taking in N as number of rows\n\n");
    assert(generate_pattern(3) == 1);
    assert(generate_pattern(-1) == INVALID);

    printf("\n\n 3. WAP to print the following sketch by taking in N as number of rows\n\n");
    assert(generate_pattern1(3) == 1);
    assert(generate_pattern1(-1) == INVALID);

    //4. Write a C program, which will print two digit numbers whose sum of both digit is
    //   is 9 e.g. 18,27......

    printf("\n\n 4. Write a C program, which will print two digit numbers whose sum of both digit \n    is nine e.g. 18,27......\n");
    assert(two_digit_sum_equal_to_nine() == 1);

    //5. Write a recursive function for calculating power of a number. Take base number and exponent from user.


    printf("\n\tEnter Base Number                        : ");
    scanf("%d", &base);
    printf("\n\tEnter Exponent                           : ");
    scanf("%d", &exponent);
    printf("\n\tPower                                    : %d", power_using_recursion(base,exponent));
    assert(power_using_recursion(10,2) == 100);
    assert(power_using_recursion(-2,5) == INVALID);


    //6. Write a recursive function for calculating factorial of a number.
    printf("\n\n 6. Write a recursive function for calculating factorial of a number.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    assert(factorial_of_number_using_recursion(5) == 120);
    assert(factorial_of_number_using_recursion(1) == 1);
    assert(factorial_of_number_using_recursion(0) == 1);
    assert(factorial_of_number_using_recursion(-10) == INVALID);

    //7. Use recursive calls to evaluate F(x) = x + x3/3! + x5/5! + x7/7!+ …
    printf("\n\n 7. Use recursive calls to evaluate F(x) = x + x3/3! + x5/5! + x7/7!+ …\n");


    //8. Concatenate two integer values using macros
    printf("\n\n 8. Concatenate two integer values using macros\n");
    printf("\n\tNote : Tested using Assertion.\n");
    assert(CONCATENATE_INTEGER(10,13) == 1013);
    assert(CONCATENATE_INTEGER(20,19) == 2019);

    //9. Find square of a number using macros.
    printf("\n\n 9. Find square of a number using macros.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    assert(SQUARE_USING_MACRO(5) == 25);
    assert(SQUARE_USING_MACRO(7) == 49);

    //10. Write a menu driven program to display the mathematical functions like square root, natural log, log10x, power(x,n), Cos(x). (use math.h)
    printf("\n\n 10. Write a menu driven program to display the mathematical functions like square root, natural log, log10x, power(x,n), Cos(x). (use math.h)\n");
    assert(mathematical_functions() == 1);
    assert(mathematical_functions() == 1);

    return 0;
}
