
#include "header.h"
#include <math.h>
#include <stdio.h>

/*--------------------------------------Day 2----------------------------------*/

// 1. Enter a 5 digit number and find the sum of its digits.
int sum_of_digits(int num)
{
    int sum = 0;
    if(num > 0) //This function only works for positive integers
    {
        while(num > 0)
        {
            sum = sum + (num % 10); //(num % 10) returns last digit of the number
            num = num / 10; // Remove last digit of the number
        }
        return sum;
    }
    else if(num == 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }

}

// 2. Function to reverse the number.
int reverse_number(int num)
{
    if (num > 0) // This function only works for positive integers
    {
        int reverse_num = 0; // Variable to store reversed number.
        while(num > 0)
        {
            reverse_num = reverse_num * 10 + (num % 10);
            num = num / 10; //Remove the last digit
        }
        return reverse_num;
    }
    else if(num == 0)
    {
        return 0;
    }
    else
    {
        return INVALID;
    }
}

// 3. Function to find occurrences of digit in a number
int occurrence_of_number(int num, int digit) // Input the number and digit whose occurrence must be found.
{
   if (num > 0) // This function only works for positive integers
   {
      int count = 0;
      while (num > 0)
      {
          if (digit == (num%10))
          {
              count++; // Increase count by 1 if digit is found
          }
          num = num / 10; // Remove last digit for next iteration
      }
      return count;
   }
   else if (num == 0)
   {
       if( num == digit )
           return 1;
       else
           return 0;
   }
   else
   {
       return -1;
   }
}

// 4. Function to check if given number is palindrome
int palindrome_number(int num) //return 1 if true, 0 if false.
{
    if (num >= 0)
    {
        if (num == reverse_number(num))
            return 1;
        else
            return 0;
    }
    else
    {
        return -1;
    }

}


// 5 Function to generate first N prime numbers
int generate_n_prime_numbers(int n)
{
    if(n > 0)
    {
        int count = 0;
        int num = 2;
        printf("\n\tGenerate %d Prime Numbers: ", n);
        while(count < n)
        {
            // Print the number if number is prime and increment the count
            if( is_prime(num))
            {
                printf("%d ",num );
                count ++;
            }
            num++;
        }
        printf("\n");
        return 1;
    }
    else
    {
        return -1;
    }
}

// 6.Function display and find the sum of the series 1+11+111+....111 up to n.
int sum_of_series()
{
    int n;
    // Initialize series and series sum to zero
    printf("\n\tEnter the value of n : ");
    scanf("%d", &n);
    if(n > 0)
    {
        int series= 0;
        int series_sum = 0;

        //logic
        for(int i=0; i<n; i++)
        {
            // Generating each element of the series
            series = series * 10 + 1;

            // Summing up generated elements
            series_sum = series_sum + series;
        }
        printf("\n\tSum of the Series    : %d", series_sum);
        return 1;
    }
    else
    {
        return -1;
    }
}

// 7. Function that asks the user to enter a number and returns if it is Armstrong or not.
int is_armstrong()
{
    int num;
    printf("\n\tEnter a number to check if the number is Armstrong or not : ");
    scanf("%d", &num);
    int sum = 0;
    int armstrong = num;
    if (num > 0)
    {
        while( num > 0)
        {
            sum = sum + cube(num%10);
            num = num/10;
        }
        if( sum == armstrong)
        {
            printf("\n\t%d is an Armstrong Number\n",armstrong);
            return 1;
        }
        printf("\n\t%d is not an Armstrong Number\n",armstrong);
        return 0;
    }
    else
    {
        return -1;
    }
}

// function to find cube of a number
int cube(int n)
{
    return n*n*n;
}

// 8. Function to check whether the giver pair is amicable or not
int is_amicable(int num1, int num2) // Return 1 if amicable else 0
{
    int sum1 = sum_of_proper_divisors(num2);
    int sum2 = sum_of_proper_divisors(num1);
    if (num1 > 0 && num2 > 0)
    {
        if(num1 == sum1 && num2 == sum2)
            return 1;
        return 0;

    }
    else
    {
        return -1;
    }
}
// Function to find sum of proper divisors
int sum_of_proper_divisors(int num)
{
    int sum = 0;
    for(int i=1; i< num ; i++)
        {
            if( num % i == 0)
            {
                sum = sum + i;
            }
        }
        return sum;
}


// 9. Function to calculate sum, difference and product.
int calculator()
{
    int num1,num2,s;
    //number 1
    printf("\n\tEnter number 1                 : ");
    scanf("%d",&num1);

    //number 2
    printf("\n\tEnter number 2                 : ");
    scanf("%d",&num2);

    //Ask which operation to perform from the user
    printf("\n\tTo find the Sum click          : 1 ");
    printf("\n\tTo find the Difference click   : 2 ");
    printf("\n\tTo find the Product click      : 3 ");
    printf("\n\tEnter your Choice              : ");
    scanf("%d",&s);
    switch(s)
        {
            case 1: printf("\n\tSum                            : %d",num1+num2);
                    break;
            case 2: printf("\n\tDifference                     : %d",num1-num2);
                    break;
            case 3: printf("\n\tProduct                        : %d",num1*num2);
                    break;
            default:printf("\nInvalid Choice\n");
                    return -1;
        }
    return 1;
}
// 10. Function to calculate volume of shapes.
int volume_of_shapes(int choice)
{
    int cube_length; //Cube
    int height, length, width; //Cuboid
    int radius; //Sphere
    int c_height, c_radius; //Cylinder
    int cone_radius, cone_height; //Cone

    switch(choice)
    {

        case 1 :
                printf("\n\tEnter the edge length of the cube : ");
                scanf("%d", &cube_length);
                printf("\n\tVolume of the Cube                : %d", cube(cube_length));
                break;
        case 2 :

                printf("\n\tEnter the height of the cuboid    : ");
                scanf("%d", &height);
                printf("\n\tEnter the length of the cuboid    : ");
                scanf("%d", &length);
                printf("\n\tEnter the width of the cuboid     : ");
                scanf("%d", &width);
                printf("\n\tVolume of the Cuboid              : %d", cuboid(height,length,width));
                break;
        case 3 :

                printf("\n\tEnter the radius of the sphere    : ");
                scanf("%d", &radius);
                printf("\n\tVolume of the Sphere              : %d", sphere(radius));
                break;
        case 4 :

                printf("\n\tEnter the height of the cylinder  : ");
                scanf("%d", &c_height);
                printf("\n\tEnter the radius of the cylinder  : ");
                scanf("%d", &c_radius);
                printf("\n\tVolume of the Cylinder            : %d", cylinder(c_height,c_radius));
                break;
        case 5 :
                printf("\n\tEnter the height of the Cone      : ");
                scanf("%d", &cone_height);
                printf("\n\tEnter the radius of the cone      : ");
                scanf("%d", &cone_radius);
                printf("\n\tVolume of the Cone                : %d", cone(cone_height,cone_radius));
                break;
        default:
                printf("\n\tInvalid Choice\n");
                return -1;

    }
    return 1;
}

// Function to find Volume of cube
int cube_volume(int length)
{
    return length * length * length;
}
//Function to find Volume of Cuboid
int cuboid(int height, int length, int width)
{
    return height * length * width;
}
//Function to find Volume of Sphere
int sphere(int radius)
{
    return (4/3)* PI * cube(radius);
}
//Function to find Volume of Cylinder
int cylinder(int height, int radius)
{
    return  PI * radius * radius * height;
}
//Function to find Volume of Cone
int cone(int height, int radius)
{
    return  (1/3)*PI * radius * radius * height;
}

// 10. Function to calculate Electricity Bill
float electricity_bill(int units_consumed)
{
    float total_charges = 0;
    if(units_consumed > 0 && units_consumed <=200)
    {
        total_charges = units_consumed * 1;
    }
    else if( units_consumed > 200 && units_consumed <= 300)
    {
        total_charges = 200 + (units_consumed - 200) * 1.5;
    }
    else if (units_consumed > 300)
    {
        total_charges = 200 + 150 + (units_consumed - 300) * 2;
    }
    else
    {
        printf("\n\tEnter number greater than 0 \n");
        return -1;
    }
    printf("\n\tTotal Charges                     : %f\n",total_charges);
    return total_charges;
}
// to check if prime or not
int is_prime(int n)
{
    if(n == 1)
    {
        return 0;
    }
    else
    {
        /*Iteration only goes up to sqrt(n) because out of the
        two factors at least one should be less than sqrt(n).*/
        for(int i=2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
