
#include "header.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int student_info(int n)
{

    Student student[n];

    //Input from user
     printf("\n");
    for(int i=0; i <n ; i++)
    {
        printf("\tEnter Student %d Roll No :  ",i+1);
        scanf("%d",&student[i].roll_no);
        printf("\tEnter Student %d Name    :  ",i+1);
        scanf("%s",&student[i].name);
        printf("\tEnter Student %d Age     :  ",i+1);
        scanf("%d",&student[i].age);
        printf("\tEnter Student %d Marks   :  ",i+1);
        scanf("%d",&student[i].marks);
        printf("\n");
    }

    //Print Student info
    printf("\n\tRoll Number\t\tName\t\tAge\t\tMarks\n");
     for(int i=0; i <n ; i++)
    {
        printf("\t%d\t\t%s\t\t%d\t\t%d",student[i].roll_no,student[i].name,student[i].age,student[i].marks);
    }
    printf("\n");

    return 1;


}


Complex complex_arithmatic(Complex c1, Complex c2, int choice)
{
    Complex result,invalid;
    switch(choice)
    {
        //sum
        case 1: result.real = c1.real + c2.real;
                result.imag = c1.imag + c2.imag;
                return result;
        //Difference
        case 2: result.real = c1.real - c2.real;
                result.imag = c1.imag - c2.imag;
                return result;
        //Product
        case 3: result.real = c1.real * c2.real;
                result.imag = c1.imag * c2.imag;
                return result;
        default:invalid.real = -1;
                invalid.imag = -1;
                return invalid;
    }

}


//SNAKE AND LADDER
//5 ladders
//7 snakes
//player position determined by dice
//must use random function

int snake_and_ladder_game(){

    printf("\t                    Welcome to Snake and Ladder Game                                 \n");
    //Add Instructions
    char start;
    //Display Board to the player
    display_board();

    printf("\t Press Enter to start playing\n");
    scanf("%c",&start);

    if(start == '\n')
    {
        game_logic();

    }


return 1;

}

int display_board()
{
    printf("\n");
    printf("\t ------------------ BOARD ---------------                                            \n");
    printf("\t| 100  99  98  97  96  95  94  93  92  91  |    ----------------------------------   \n");
    printf("\t|  81  82  83  84  85  86  87  88  89  90  |   |         Snake and Ladder         |  \n");
    printf("\t|  80  79  78  77  76  75  74  73  72  71  |   | Snake 99 to 49   Ladder 61 to 95 |  \n");
    printf("\t|  61  62  63  64  65  66  67  68  69  70  |   | Snake 85 to 52   Ladder 70 to 92 |  \n");
    printf("\t|  60  59  58  57  56  55  54  53  52  51  |   | Snake 72 to 60   Ladder 24 to 65 |  \n");
    printf("\t|  41  42  43  44  45  46  47  48  49  50  |   | Snake 55 to 32   Ladder 21 to 66 |  \n");
    printf("\t|  40  39  38  37  36  35  34  33  32  31  |   | Snake 40 to 20   Ladder 07 to 28 |  \n");
    printf("\t|  21  22  23  24  25  26  27  28  29  30  |   | Snake 15 to 02   Ladder 04 to 46 |  \n");
    printf("\t|  20  19  18  17  16  15  14  13  12  11  |   | Snake 17 to 10                   |  \n");
    printf("\t|  01  02  03  04  05  06  07  08  09  10  |    ----------------------------------   \n");
    printf("\t ------------------------------------------                                          \n");
    printf("\n");
    return 1;
}

int roll_dice()
{
    int dice;
    // Use current time as seed for random generator
    srand(time(0));
    // Random Number 1 - 6
    dice = rand()%6 + 1;
    return dice;
}


int check_snake(int pos) //Return new position if player got bitten by snake else return 0
{
    if(pos == 99)
        return 07;
    else if(pos == 92)
        return 05;
    else if(pos == 77)
        return 15;
    else if (pos == 65)
        return 32;
    else if (pos == 40)
        return 20;
    else if (pos == 15)
        return 2;
    else if(pos == 17)
        return 10;
    else
        return 0;

}
int check_ladder(int pos) //Return new position if player got ladder to climb else return 0
{
    if(pos == 55)
        return 95;
    else if(pos == 64)
        return 92;
    else if(pos == 29)
        return 65;
    else if (pos == 25)
        return 66;
    else if (pos == 02)
        return 82;
    else if (pos == 9)
        return 64;
    else
        return 0;

}



int game_logic()
{
    int game = 1;
    char press;
    int dice;
    int player_pos = 0;
    int computer_pos = 0;
    int flag = 1;
    while (game)
    {
        //Your Turn
        if(flag == 1)
        {
            printf("\t------------------------------  Your Turn -------------------------\n\n");
            printf("\tCurrent Position : %d\n\n",player_pos);
            printf("\tPress Enter to Roll the Dice, Press 'Q' to quit the game\n");
            press = getchar();

            //Roll the Dice
            if(press == '\n')
            {
                dice = roll_dice();
                printf("\tYou Rolled : %d\n\n",dice);
            }
            else if(press == 'Q' || press == 'q')
                break;

            //Check if player reached 100
            if(player_pos + dice == 100)
            {
                printf("\tNew Position : %d\n\n",player_pos);
                printf("\t********************Congratulations You Won The Game!!*******************************\n");
                 //Stop Game
                break;
            }
            //If position greater than 100 leave the position  untouched
            else if(player_pos + dice > 100)
            {
                printf("\tYou need %d to win the game\n", 100-player_pos);
            }
            //Check for ladder and snakes
            else
            {
                player_pos = player_pos + dice;
                if (check_snake(player_pos) != 0)
                {
                    printf("\t You got bitten by a snake at %d \n\n",player_pos);
                    player_pos = check_snake(player_pos);
                }
                if (check_ladder(player_pos) != 0)
                {
                    printf("\t You got a ladder at %d \n\n",player_pos);
                    player_pos = check_ladder(player_pos);
                }
            }
            printf("\tNew Position : %d\n\n",player_pos);
            flag = 0;//Computers turn

        }
        //Computers Turn
        else if(flag == 0)
        {

            printf("\t---------------------------- Computers Turn -----------------------\n\n");
            printf("\tCurrent Position : %d\n\n",computer_pos);

            // Random Number 1 - 6
            dice = rand()%6 + 1;
            printf("\tComputer Rolled : %d\n\n",dice);


            //Check if computer reached 100
            if(computer_pos + dice == 100)
            {
                printf("\tNew Position : %d\n\n",computer_pos+dice);
                printf("\t****************************   Lost  **************************************\n");
                 //Stop Game
                break;
            }
            //If position greater than 100 leave the position  untouched
            else if(computer_pos + dice > 100)
            {
                printf("\tComputer needs %d to win the game\n\n", 100-computer_pos);
            }
            //Check for ladder and snakes
            else
            {
                computer_pos = computer_pos + dice;
                if (check_snake(computer_pos) != 0)
                {
                    printf("\tComputer got bitten by a snake at %d \n\n",computer_pos);
                    computer_pos = check_snake(computer_pos);
                }
                if (check_ladder(computer_pos) != 0)
                {
                    printf("\tComputer got a ladder at %d \n\n",computer_pos);
                    computer_pos = check_ladder(computer_pos);
                }
            }
            printf("\tNew Position : %d\n\n",computer_pos);
            flag =1; //Players turn
            display_board();
        }


    }
    return 1;
}
