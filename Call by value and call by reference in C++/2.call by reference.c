#include <stdio.h>
#include <conio.h>

// call by reference
void modifyValue(int *a, int *b)
{

    *a = 15;
    *b = 25;
}

int main()
{

    int x = 10, y = 20;
    modifyValue(&x, &y);
    printf("Call by Value:\n");
    printf("x = %d, y = %d\n\n", x, y);

    return 0;
}
