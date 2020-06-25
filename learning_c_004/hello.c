#include <stdio.h>

int main()
{
    //Setting Vars
    float pi = 3.141592;
    int casted_pi = (int) pi;
    char ch = 'A';
    int ch_ascii_value = (int) ch;

    // If Statment
    if (casted_pi != 3)
    {
        /* This should never Happen */
        printf("PI casted to whole number not equal to 3!\n");
        return -1;
    }

    // Printing out Vars
    printf("Casted PI to integer: %d\n", casted_pi);
    printf("PI: %f\n", pi);

    printf("\n");
    printf("ch = %c\n", ch);
    printf("ch in ASCII: %i\n", ch_ascii_value);
    return 0;
}