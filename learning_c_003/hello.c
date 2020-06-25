#include <stdio.h>

/*
    This program is just showcasing input and output.
    This program uses printf and scanf
    By: Tyler Wendorff
*/

int main()
{
    int a;
    puts("This is using the Puts Function."); // Puts automaticly puts a newline char in front of it
    printf("This is using the printf Function.\n");

    printf("Enter a Integer Value: ");
    scanf("%d", &a);
    printf("Entered int: %d\n", a);
    return 0;
}