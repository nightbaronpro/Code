#include <stdio.h>
#define MAX 11
void NhapMang(int a[]);
int gcd (int x,int y);
int main(void)
{
    int arr[MAX];
    //int A[10] = { 112, 160, 180, 240, 288, 32, 480, 96, 60, 72 };
    NhapMang(arr);
    int g = arr[0];
    for (int i = 1; i < 11; i++)
        g = gcd(g, arr[i]);

    printf("The Greatest Common Denominator is: %d\n", g);
    
    return 0;
}

int gcd(int x, int y)
{
    int r;
    if (x <= 0 || y <= 0)
        return(0);

    /* while(true) */
    while ((r = x % y) != 0)
    {
        x = y;
        y = r;
    }
    return(y);
}
void NhapMang (int a[])
{
    for (int i=0; i<MAX; i++)
    {
        scanf("%d",&a[i]);
    }
}