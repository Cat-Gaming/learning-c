#include <stdio.h>
#include "other_file.h" /* a and b are staying in memory
                           after they are out of scope*/
#define PRICE_OF_CORN 0.99 // Defines the Price of Corn

void autovars(void)
{
    auto word;
    word = 1;
    printf("word var: %i\n", word);
}

int main(void)
{
    register a = 2;
    register b = 2;
    register sum = a + b;
    printf("a and b are stored in the CPU which makes this faster.\n");
    printf("a + b = %i\n", sum);

    autovars();
    // printf("%i", word); if you call this variable outside of it's scope the compiler will complain because the var does not exist because it's defined as a auto var

    // Static Var
    printf("a = %d\n", a);
    a = 1;
    printf("a = %d\n", a);
    modify();
    printf("a = %d\n", a);

    //Scope Practice
    int i;
    i = 6;
    printf("The var 'i' is: %i\n", i);
    i = 2;
    printf("The var 'i' is: %i\n", i);

    // Types
    char ch = 'a';
    char string[] = "This is a String.";

    float pi = 3.141f;
    double pi_accurate = 3.14159265;

    short short_int = 6;
    
    // The #define macro

    printf("The Price of Corn is: %f\n", PRICE_OF_CORN);
    printf("The Price of Corn discounted by 50 percent is: %f\n", PRICE_OF_CORN / 2);

    printf("I learned a lot from this about C variable types Including auto, static and more!\n");
    printf("From Tyler Wendorff.\n");

    return 0;
}