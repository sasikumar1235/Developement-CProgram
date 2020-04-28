#include <stdio.h>
#include <conio.h>
int main()
{
    int r[10], a;
    int n, i;
    int big = 0;
    printf("how many numbers you want to sort ");
    scanf("%d", &n);
    printf("enter the %d numbers to sort", n);
    scanf("%d", &a);
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &r[i]);
        if (big < r[i])
            big = r[i];
    }
    printf("the biggest number is %d", big);
    getch();
    return 0;
}
