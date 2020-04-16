#include<stdio.h>
#include<conio.h>
int main()
{
    //var dec
    int num1;
    int num2;
    int result;
    //user input
    printf("enter first number : ");
    scanf("%d",&num1);
    printf("enter second number : ");
    scanf("%d",&num2);
    //process
    result= num1 + num2;
    //output
    printf("Sum of %d + %d = %d",num1,num2,result);
}

