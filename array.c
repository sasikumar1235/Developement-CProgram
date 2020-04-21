//add in loop using array
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, n, sum = 0;
    printf("How many numbers u want to add : ");
    scanf("%d", &n);
    printf("Enter the %d numbers : \n", n);
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Total is  %d ", sum);
}
// a[0] = 3
// a[1] = 4
//important concepts in Programs Language
