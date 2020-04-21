//function add program with return
#include <stdio.h>
#include <conio.h>
//function declaration
int sum(int a,int b);
int sub(int a,int b);
int mark(int a);
int loopstring(char string[50],int a);
int main()
{
    int num1, num2,choice,i=1;//variable declaration
    char s[50];
    choice=1;
    while(i<2)
    {
        printf("\n1. Sum\n");
        printf("2. Sub\n");
        printf("3. Check Mark\n");
        printf("4. LoopString\n");
        printf("10.Exit\n");
        printf("Enter the any one of the above operation : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter two number: ");
            scanf("%d %d", &num1,&num2);
            printf("Sum of the entered numbers: %d", sum(num1,num2));
            break;
        case 2:
            printf("\nEnter two number: ");
            scanf("%d %d", &num1,&num2);
            printf("Subtraction of the entered numbers: %d", sub(num1,num2));
            break;
        case 3:
            printf("\nEnter mark :");
            scanf("%d",&num1);
            mark(num1);
            break;
        case 4:
            printf("\nEnter the string : ");
            scanf("%s",&s);
            printf("\nEnter the number :");
            scanf("%d",&num1);
            loopstring(s,num1);
            break;
        case 10:
            printf("Exiting..........");
            break;
        default :
            printf("\nWRONG CHOICE\n");
        }
        if (choice==10)
            break;//breaks the loop
    }

    getch();
    return 0;
}
//function
int sum(int a,int b)
{
    int result;
    result= a+b;
    return result;
}
int sub(int a,int b)
{
    return a-b;
}
int mark(int a)
{
    if (a<35)
    {
        printf("Fail");
    }
    else if (a<50)
    {
        printf("Average");
    }
    else
    {
        printf("Good");
    }
    return 0;
}
int loopstring(char string[50],int a)
{
    int i=1;
    while(i<=a)
    {
        //output
        printf("\nthe given string is %s\n",string);
        ++i;
    }
    return 0;
}
