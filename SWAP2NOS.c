// Code to swap the values of 'x' and 'y'
#include <stdio.h>
void main()
{
    int x = 10, y = 20;
    printf("Before Swapping: x = %d : y = %d", x, y);
    x = x * y; // x now becomes 200
    y = x / y; // y becomes 10
    x = x / y; // x becomes 20
    printf("After Swapping: x = %d : y = %d", x, y);
}
