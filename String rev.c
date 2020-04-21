#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
int main()
{
    char st[100], rst[100];
    int i = 0, j = 0;
    printf("enter the string : ");
    scanf("%s", &st);
    printf("the reverse string is %s", strrev(st));
}