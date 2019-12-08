#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf ("Nhap vao n: ");
    scanf ("%d",&n);
    if (n<2)
    {
        printf("Nhap sai!");
    }
    int dem = 0;
    for (int i=2; i<sqrt(n); i++)
    {
        if (n%i == 0)
        {
            dem ++;
        }
    }
    if (dem == 0)
    {
        printf ("%d la so nguyen to\n",n);
    }
    else 
    {
        printf ("%d khong la so nguyen to\n",n);
    }
    return 0;
}