#include <stdio.h>

int main(void)
{
    int x = 28;
    int y = 50;
    
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    
    //swapping...
    int temp = x;
    x = y;
    y =temp;
    
    //this is the change
    
    printf("x is now for real %i\n", x);
    printf("y is now fir real in branch %i\n", y);
}

// this is the change
