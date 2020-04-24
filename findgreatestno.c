/*
Program name - find biggest number is given number
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, a[100];
    int i, big; //variable declaration
    printf("How many number u want to check :");
    scanf("%d", &n);
    printf("Enter the number one by one : ");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
        if (big < a[i])
        {
            big = a[i];
        }
    }
    printf("the biggest number is : %d ", big);
}