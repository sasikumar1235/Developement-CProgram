/*Divided By zero Error i.e.Exception */
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int ddend = 60;
    int dsor = 1;
    int q;
/*
    if (dsor == 0)
    {
        fprintf(stderr, "Division by zero! Exiting...\n");
        getch();
        exit(-1);
    }*/
    q = ddend / dsor;
    fprintf(stderr, "Value of quotient : %d\n", q);
    getch();
    exit(0);
}
