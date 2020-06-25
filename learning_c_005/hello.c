#include <stdio.h>
#include <string.h>

/*
    This Program uses the ( num[i] ? 0 : 1) operater to decide if a bit is 0 turn the bit to a 1
    and if the bit is 1 then make it a 0
    Then i create a pointer to the var nums
    then i use a pointer to print the memory address of nums and it's data
*/

int main()
{
    static int nums[6] = {3, 2, 54, 24, 1};

    int point[6] = {0, 1, 0, 1, 1, 0};
    for (int i = 0; i < 6; i++)
    {
        printf("Bit %i: %i\n", i, point[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        point[i] = (point[i] ? 0 : 1);
        printf("Bit NOT: %i: %i\n", i, point[i]);
    }

    static int *ptr = &nums;
    if (ptr == NULL)
        return -1;

    printf("Memory Address of nums is: 0x%x\n", ptr);
    while (*ptr)
    {
        printf("Value of ptr to from memory address: 0x%x is: %i\n", ptr, *ptr);
        *ptr++;
    }

    return 0;
}