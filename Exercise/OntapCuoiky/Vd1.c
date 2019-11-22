#include <stdio.h>

int main()
{
    int i,k;
    i=5, k=i++;
    printf ("i = %d, k = %d",i,k);
    i=5, k=++i;
    printf("\ni = %d,k = %d",i,k);
    return 0;
}