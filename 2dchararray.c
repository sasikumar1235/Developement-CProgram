#include <stdio.h>
int main()
{
    char name[10][20];
    int i, n;

    printf("Enter the number of names (<10): ");
    scanf("%d", &n);

    // reading string from user
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++)
        scanf("%s[^\n]", name[i]);

    // Dispaying strings
    printf("\nEntered names are:\n");
    for (i = 0; i < n; i++)
        puts(name[i]);

    return 0;
}