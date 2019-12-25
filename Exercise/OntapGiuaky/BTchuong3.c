#include <stdio.h>

int main ()
{
    printf ("-------Tinh tong tu 1 den n-------");
    int n;
    do
    {
        printf ("\nNhap vao n: ");
        scanf ("%d",&n);
        if (n<0)
        {
            printf ("Nhap sai, moi nhap lai!");
        }
    } while (n<0);
    int tong = 0;
    for (int i=1; i<=n; i++)
    {
        if (i%2 == 0)
        {
            tong += i;
        }
    }
    printf ("ket qua la %d",tong);
    return 0;
}