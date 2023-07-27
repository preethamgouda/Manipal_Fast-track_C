#include "header.h"
#include <math.h>
#include <stdio.h>

/*--------------------------------------Day 3----------------------------------*/

// 1. WAP to convert a binary number to decimal and vice versa.

// Binary to Decimal

int binary_to_decimal(int binary_number)
{
    int rem = 0; //to store binary bits
    int decimal_number = 0;
    int base = 1;
    if(binary_number >= 0) //Only Positive Numbers
    {
        while(binary_number > 0)
        {
            rem = binary_number % 10;
            if (rem > 1) // Binary bits can hold only 1 or 0
                return -1;
            decimal_number = decimal_number + rem * base;
            base = base * 2;
            binary_number = binary_number / 10; // Remove last bit
        }
        return decimal_number;
    }
    else
    {
        return -1;
    }
}

// Decimal to Binary

int decimal_to_binary(int decimal_number)
{
    int base = 2;
    int binary_number = 0;

    if(decimal_number >= 0) // positive numbers only
    {
        while(decimal_number > 0)
        {
            binary_number = binary_number * 10 + decimal_number % base;
            decimal_number = decimal_number / 2; //Decimal Number for next iteration
        }
        return binary_number;
    }
    else
    {
        return -1;
    }

}

// 2. Generate a sequence of numbers such that every number in the sequence is the sum of
//    the previous three numbers. The first three numbers are 0,0,1

int generate_sum_of_previous_three_numbers(int sequence_length)
{
    int first = 0, second = 0, third = 1;
    int next = 0;
    printf("\n\tSequence Length : %d\n\tSequence :", sequence_length);
    //Corner cases
    if (sequence_length == 1)
    {
        printf(" 0\n");
        return 1;
    }

    else if(sequence_length == 2)
    {
        printf(" 0 0\n");
        return 1;
    }

    else if(sequence_length == 3)
    {
         printf(" 0 0 1\n");
         return 1;
    }

    // sequence length greater than 3
    else if(sequence_length > 3)
    {
        printf(" 0 0 1");
        for( int i = sequence_length; i > 3 ; i--)
        {
            next = first + second + third  ;
            printf(" %d", next);
            first = second;
            second = third;
            third = next;
        }
        printf("\n");
        return 1;
    }
    else
    {
        printf(" Invalid \n");
        return -1;
    }

}

// 3. WAP to print the following sketch by taking in N as number of rows

/*      * * * *
          * * *
            * *
              *
*/

int generate_pattern(int rows)
{
    int spaces = 0;
    if( rows > 0)
    {
        for(int i=rows ; i > 0; i--)
        {
            printf("\t");
            spaces = rows - i; // spaces to be added
            for(int j=i; j > 0; j--)
            {
                while( spaces != 0 ) // Add spaces
                {
                    printf("  ");
                    spaces--;
                }
                printf(" *");
            }
            printf("\n");
        }
        return 1;
    }
    else
    {
        return -1;
    }
}


int generate_pattern1(int rows) {
    if (rows <= 0) {
        return -1;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 1;
}

// 4. Write a C program, which will print two digit numbers whose sum of both digit is
//    nine. e.g. 18,27......

int two_digit_sum_equal_to_nine()
{
    int digit_1, digit_2, sum = 0;
    int number = 18; // First two digit number
    printf("\t Numbers :");
    for(int i = number ; i < 99 ; i++ )
    {
        digit_1 = i % 10; // Units place
        digit_2 = i / 10; // Tens Place
        sum = digit_1 + digit_2 ;
        if(sum % 9 == 0)
            printf(" %d",i);
    }
    printf("\n");
    return 1;
}

// 5. Write a recursive function for calculating power of a number. Take base number and exponent from user.

int power_using_recursion(int base,int exponent)
{
    if(base >= 0 && exponent >= 0 )
    {
        // Base Case
        if(exponent == 0)
        {
            return 1;
        }
        // Recursive Statement
        else
        {
            return base * power_using_recursion(base,exponent-1);

        }
    }
    else
    {
        return -1; // Return -1 for invalid inputs
    }
}

// 6. Write a recursive function for calculating factorial of a number.

int factorial_of_number_using_recursion(int number)
{
    if(number >= 0 )
    {
        // Base Case
        if(number == 0)
        {
            return 1;
        }
        // Recursive Statement
        else
        {
            return number * factorial_of_number_using_recursion(number - 1);

        }
    }
    else
    {
        return -1; // Return -1 for invalid inputs
    }
}

//7. Use recursive calls to evaluate F(x) = x + x3/3! + x5/5! + x7/7!+ …

int evaluate_function_using_recursion(int x)
{
    if(x >= 0)
    {
        //return 1
    }
    //return n * factorial(n - 1);
    return 0;
}

//8. Concatenate two integer values using macros
//Macro function defined in header file

//9. Find square of a number using macros
//Macro function defined in header file

//10. Write a menu driven program to display the mathematical functions like square root, natural log, log10x, power(x,n), Cos(x). (use math.h)
int mathematical_functions()
{
    double base,exponent;
    double cos_x,sqrt_x,nlog_x,log_x;
    int choice;

    //Display to the user
    printf("\n\tMathematical Functions\n");
    printf("\n\tSelect 1 to find square root(x) ");
    printf("\n\tSelect 2 to find natural log(x) ");
    printf("\n\tSelect 3 to find log10(x)       ");
    printf("\n\tSelect 4 to find power(x,n)     ");
    printf("\n\tSelect 5 to find cos(x)         ");
    printf("\n\tEnter your choice          : ");
    scanf("%d",&choice);

    //switch implementation
    switch(choice)
    {
    case 1: printf("\n\tSquareRoot(x) ");
            printf("\n\tEnter value of x           : ");
            scanf("%lf",&sqrt_x);
            printf("\n\tSquare Root of %lf  = %lf",sqrt_x,sqrt(sqrt_x));
            printf("\n");
            return 1;
            break;
    case 2: printf("\n\tNatural Log ");
            printf("\n\tEnter value of x           : ");
            scanf("%lf",&nlog_x);
            printf("\n\tNatural log of %lf  = %lf",nlog_x,log(nlog_x));
            return 1;
            break;
    case 3: printf("\n\tlog10(x) ");
            printf("\n\tEnter value of x           : ");
            scanf("%lf",&log_x);
            printf("\n\tlog10 of %lf  = %lf",log_x,log10(log_x));
            printf("\n");
            return 1;
            break;
    case 4: printf("\n\tpower(base,exponent)");
            printf("\n\tEnter base number          : ");
            scanf("%lf",&base);
            printf("\n\tEnter exponent             : ");
            scanf("%lf",&exponent);
            printf("\n\t%lf to the power %lf = %lf",base,exponent,pow(base,exponent));
            printf("\n");
            return 1;
            break;
    case 5: printf("\n\tCos(x)");
            printf("\n\tEnter value of x           : ");
            scanf("%lf",&cos_x);
            printf("\n\tcos(%lf) = %lf",cos_x,cos(cos_x));
            printf("\n");
            return 1;
            break;
    default:printf("\n\\tEnter valid choice \n");
            return -1;

    }
}
