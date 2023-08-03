#include<assert.h>
#include<stdio.h>
#include"header.h"

void test_student_info()
{
    //User Input
    assert(student_info(2) == 1);
}

void test_complex_arithmatic()
{
    Complex c1,c2,sum,difference,product;
    c1.real = 20;
    c1.imag = 4;
    c2.real = 3;
    c2.imag = 5;
    sum = complex_arithmatic(c1,c2,1);
    difference = complex_arithmatic(c1,c2,2);
    product = complex_arithmatic(c1,c2,3);
    assert (sum.real == 23);
    assert(sum.imag == 9);
    assert (difference.real == 17);
    assert(difference.imag == -1);
    assert (product.real == 60);
    assert(product.imag == 20);


}

/*--------------------------------------Day 6 ----------------------------------*/
int main()
{
    //1. Write a program to store and print the roll no., name, age and marks of 10 students using structures.
    printf("\n\n 1. program to store and print the roll no., name, age and marks of 10 students using structures.\n");
    test_student_info();

    //2. Write a program to add, subtract and multiply two complex numbers using structures.
    printf("\n\n 2. Write a program to add, subtract and multiply two complex numbers using structures.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    test_complex_arithmatic();

    assert(snake_and_ladder_game() == 1);

    return 0;
}
