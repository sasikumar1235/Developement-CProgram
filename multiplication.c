//Multiplication program
//Github
//https://github.com/sasikumar1235/Developement-CProgram
#include <stdio.h>
#include <conio.h>
//function declaration
int multiplication(int num1,int num2);
int multiplication1(int num1);
int multiplication2();
int main()
{
   int num1, num2;//variable declaration
   printf("Enter the number :");
   scanf("%d",&num1);
    printf("How many series :");
   scanf("%d",&num2);
   multiplication(num1,num2);
   multiplication1(num1);
   multiplication2();
   getch();
   return 0;
}
//multiplication function
int multiplication(int num1,int num2)
{
    int i;
    int result;
    printf("For loop\n");
    for(i=1;i<=num2;i++)
    {
        result = num1 * i;
        printf("%d * %d = %d\n",num1,i,result);
    }
    return 0;
}
int multiplication1(int num1)
{
    int i;
    int result;
    printf("do while loop\n");
    i=1;
    do
    {
        result = num1 * i;
        printf("%d * %d = %d\n",num1,i,result);
        i = i + 1;
    }while(i<=2);
    return 0;
}
int multiplication2()
{
    int i;
    int result;
    int num1 = 5;
    printf("while loop\n");
    i=1;
    while(i<=2)
    {
        result = num1 * i;
        printf("%d * %d = %d\n",num1,i,result);
        i = i + 1;
    }
    return 0;
}
/*
    program purpose -
                    multiplication
    what is user input -
                    which number multiplication?,how many series?
    output -
            5 * 1 = 5
            5 * 2 = 10
            5 * 3 = 15
    Program logic -
            multiplication number * 1 = ans
            multiplication number * 2 = ans
            multiplication number * 3 = ans
            ...
            multiplication number * n = ans

    loop - condition
        increment number
        printf
*/

