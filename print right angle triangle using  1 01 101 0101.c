//PRINT RIGHT ANGLE TRIANGLE USING 1 01 01 0101//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include <stdio.h>
int main()
{
    int i, y;
    for (i = 1; i <= 4; i++)
    {
        for (y = 1; y <= i; y++)
        {
            if (i % 2 == 0 && y % 2 != 0)
                printf("0");
            else if (i % 2 != 0 && y % 2 == 0)
                printf("0");
            else
                printf("1");
                
            if (y == i)
                printf("\n");
        }
    }
    return 0;
}
