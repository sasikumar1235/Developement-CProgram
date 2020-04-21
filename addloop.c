//add in loop
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, n, i, sum = 0;
    printf("How many numbers you want to add : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &a);
        sum = sum + a;
    }
    printf("Total is %d:", sum);
}
// a=3
// a=4