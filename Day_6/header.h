
#define PI 3.14
#define INVALID -1
#define TRUE 1
#define FALSE 0
#define SIZE 10

int display_board();
int roll_dice();
int snake_and_ladder_game();
int game_logic();
int check_ladder(int pos);
int check_snake(int pos) ;

struct _student_
{
    int roll_no;
    char name[20];
    int age;
    int marks;
};

typedef struct _student_ Student;

int student_info(int n);

typedef struct _complex_number_
{
    float real;
    float imag;

}Complex;
Complex complex_arithmatic(Complex c1, Complex c2, int choice);
