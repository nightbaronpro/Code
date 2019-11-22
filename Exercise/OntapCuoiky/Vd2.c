#include <stdio.h>

int main()
{
    int a,b;
    a = 3;
    b = 1;
    {
        int a,b;
        a = 30;
        b = 10;
        printf ("ket qua la: %d", a+b);
    }
    printf ("\nket qua con lai la: %d",a+b);
    return 0;
}