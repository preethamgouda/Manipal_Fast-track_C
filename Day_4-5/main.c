#include <assert.h>
#include <stdio.h>
#include <string.h>
#include"header.h"
//Test Functions

void test_sort_array()
{
    //test variable
    int test_array[SIZE] = {5,3,1,2,4};

    //Ascending Order
    assert(sort_array(test_array,SIZE,0) == 1);
    for(int i = 0; i < SIZE; i++)
        assert(test_array[i] == i+1);
    //Descending Order
    assert(sort_array(test_array,SIZE,1) == 1);
    for(int i = 0; i < SIZE; i++)
        assert(test_array[i] == SIZE - i);


}

void test_swap_variables()
{
    int a = 10, b = 20;
    assert(swap_variables(&a,&b) == 1);
    assert(a == 20);
    assert(b == 10);
}

void test_max_min()
{
    int test_array[SIZE] = {5,3,1,2,4};
    int max,min;

    assert(find_max_min(test_array,SIZE,&max,&min) == 1);
    assert(max == 5);
    assert(min == 1);
}

void test_linear_search()
{
    int search_array[SIZE] = {1,15,21,8,7};

    assert(linear_search(search_array,SIZE,15) == 1);
    assert(linear_search(search_array,SIZE,7) == 4);
    assert(linear_search(search_array,SIZE,25) == -1);

}

void test_binary_search_non_recursive()
{
    int sorted_array[SIZE] = {1,5,10,21,28};
    assert(binary_search_non_recursive(sorted_array,SIZE,15) == -1);
    assert(binary_search_non_recursive(sorted_array,SIZE,1) == 0);
    assert(binary_search_non_recursive(sorted_array,SIZE,10) == 2);
    assert(binary_search_non_recursive(sorted_array,SIZE,28) == 4);

}
void test_sum_of_product_of_consecutive_numbers()
{
    int arr[] = {4,5,2,5,6,4,7};
    int array_size = (int)(sizeof(arr)/sizeof(arr[0]));
    assert(sum_of_product_of_consecutive_numbers(arr,array_size,7)==122);
    assert(sum_of_product_of_consecutive_numbers(arr,array_size,6)==94);
    assert(sum_of_product_of_consecutive_numbers(arr,array_size,5)==70);
    assert(sum_of_product_of_consecutive_numbers(arr,array_size,4)==40);
    assert(sum_of_product_of_consecutive_numbers(arr,array_size,3)==30);
    assert(sum_of_product_of_consecutive_numbers(arr,array_size,2)==20);
    assert(sum_of_product_of_consecutive_numbers(arr,array_size,1)==4);
    assert(sum_of_product_of_consecutive_numbers(arr,array_size,10)==-1);
}

void test_string_length()
{
    char str[] = "Hello World";
    assert(string_length(str) == 11);
    assert(string_length("hi") == 2);
    assert(string_length("") == 0);

}

void test_date_in_worded_format()
{
    assert(date_in_worded_format(011,11,2021) == 1);
    assert(date_in_worded_format(07,01,1998) == 1);
    assert(date_in_worded_format(32,11,2000) == -1);

}

void test_convert_string_case()
{
    char str[] = "Hello World";
    assert(convert_string_case(str) == 1);
    //Check the string after conversion
    assert(strcmp(str,"HELLO WORLD") == 0);//Returns 0 if strings are identical
}

void test_reverse_string()
{
    char str[] = "Hello";
    assert(reverse_string(str) == 1);
    //Check after Reversing
    assert(strcmp(str,"olleH") == 0);

}

void test_display_matrix()
{
    //5*5 Matrix
    int mat[5][5] = {{9,2,3,4,5},{5,4,3,2,1},{1,0,1,0,1},{2,4,5,6,8},{6,7,8,9,5}};
    assert(display_matrix((int *)mat,5,5) == 1);
}





void test_is_sparse_matrix()
{
    int mat1[5][5] = {{9,2,3,4,5},{5,4,3,2,1},{1,0,1,0,1},{2,4,5,6,8},{6,7,8,9,5}};
    int mat2[5][5] = {{9,0,3,0,0},{0,4,3,0,0},{1,0,1,0,1},{2,0,0,0,8},{0,0,0,9,5}};
    assert(is_sparse_matrix((int *)mat1,5,5) == FALSE);
    assert(is_sparse_matrix((int *)mat2,5,5) == TRUE);
    assert(is_sparse_matrix((int *)mat2,0,5) == INVALID);

}


/*--------------------------------------Day 4-5 ----------------------------------*/
int main()
{

    //1. WAP to sort the given array in ascending and descending order.
    printf("\n\n 1. WAP to sort the given array in ascending and descending order.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    test_sort_array();


    //2. Write a program to swap two numbers using function.
    printf("\n\n 2. Write a program to swap two numbers using function.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    test_swap_variables();



    //3. WAP to find minimum and maximum elements in a given array using the function int find_max_min(int array[], int size, int *max, int *min);
    printf("\n\n 3. WAP to find minimum and maximum elements in a given array using function \n");
    printf("\n\tNote : Tested using Assertion.\n");
    test_max_min();



    //4. Write a C program that take 2 integer sets A[] and b[] as input and prints results of  set operations:
   // printf("\n\n 4. Write a C program that take 2 integer sets A[] and b[] as input and prints results of  set operations:\n");
    //remove_duplicate_elements(arr,&size);
    //print_array(arr,size);

    //5. WAP to store 10 numbers in an array. Remove the duplicate entries in the array



    //6. WAP to search for a given integer in an array using the linear search technique.
    printf("\n\n 6. WAP to search for a given integer in an array using the linear search technique.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    test_linear_search();

    //7. WAP to search for a given integer in an array using the binary search technique
    printf("\n\n 7. WAP to search for a given integer in an array using the binary search technique.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    test_binary_search_non_recursive();

    //8. Write a C program, that reads list of n integer and print sum of product of consecutive numbers.
    printf("\n\n 8. Write a C program, that reads list of n integer and print sum of product of consecutive numbers.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    test_sum_of_product_of_consecutive_numbers();

    //9. WAP to read a string from the user and find the length of string.( Note: Do not use string.h header file)
     printf("\n\n 9. WAP to read a string from the user and find the length of string.( Note: Do not use string.h header file)\n");
     printf("\n\tNote : Tested using Assertion.\n");
     test_string_length();

    //10.Input date, month and year from the user, and using switch case, display in
    //   worded format. e.g. input: d=16, m=7, y=1992
    //   Output: 16th July, 1992
    printf("\n\n 10.Input date, month and year from the user, and using switch case, display in worded format\n");
    printf("\n\tNote : Tested using Assertion.\n");
    test_date_in_worded_format();

    //11. Write a function that will scan a character string passed as an argument and convert
    //    all lower-case characters into their upper-case equivalents.
    printf("\n\n 11. Write a function that will scan a character string passed as an argument and convert \n      all lower-case characters into their upper-case equivalents\n");
    printf("\n\tNote : Tested using Assertion.\n");
    test_convert_string_case();


    //12. Write a program to read a string from the user and reverse the string.( Note: Do not use string.h header file)
    printf("\n\n 12. Write a program to read a string from the user and reverse the string.( Note: Do not use string.h header file)\n");
    printf("\n\tNote : Tested using Assertion.\n");
    test_reverse_string();

    //13.Write a program to check whether the given input string is palindrome
    //int is_palindrome(const char *str)

    //14. Write a program to concatenate two stings
   // printf("\n\n 14. WAP to add 2 string.\n\n");
    //void concatenate_strings(char dest[], const char src[])

    //15. WAP to construct 5 * 5 matrix and display the contents. Use functions for construction and display of matrix.
   // printf("\n\n 14. display matrix.\n");
    //int display_matrix(int *arr, int row, int col);

    //16. Given a matrix of size NxN, find it’s Transpose
    //void find_transpose(int mat[N][N])

    //18. WAP program to check if given matrix is a sparse matrix. If the number of zeros in a
    //    matrix exceeds (n*m)/2, where n, m is the dimension of the matrix, matrix is sparse
    //    matrix. Sparse matrix has more zero elements than nonzero elements.
    printf("\n\n 18. WAP program to check if given matrix is a sparse matrix.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    test_is_sparse_matrix();

    return 0;

}
