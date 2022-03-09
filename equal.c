#include <stdio.h>
 
int checkForEquality(int x, int y)
{
    return !(x ^ y);
}
 
int main(void)
{
    int x = 10, y = 10;
 
    if (checkForEquality(x, y))
        printf ("%d equal", x, y);
    else
        printf ("%d not equal", x, y);
    return 0;
}