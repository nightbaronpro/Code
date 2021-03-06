#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define MAX 100
void NhapMang (int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("a[%d] = ",i);
        scanf ("%d",&a[i]);
    }
}
void XuatMang (int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}

// Bai toan tach phan tu la so nguyen to trong mang a vao mang b va mang c la cac so con lai.
int checkPrimeNumber(int n)
{
    int flag = 1;
    for(int i=2; i <= n/2; ++i)
    {
        if (n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
void TachMang (int a[],int n)
{
    int b[MAX], nb = 0;
    for (int i=0; i<n; i++)
    {
        if (checkPrimeNumber(a[i]) == 1)
        {
            b[nb] = a[i];
            nb++;
        }
    }
    XuatMang(b,nb);
}
void Mangconlai (int a[],int n)
{
    int c[MAX], nc = 0;
    for (int i=0; i<n; i++)
    {
        if (checkPrimeNumber(a[i]) == 0)
        {
            c[nc] = a[i];
            nc++;
        }
    }
    XuatMang(c,nc);
}
int main()
{
    int n;
    int a[MAX];
    do
    {
        printf ("Nhap vao so phan tu cua mang: ");
        scanf ("%d",&n);
        if (n<0 || n>MAX)
        {
            printf ("Nhap sai, moi ban nhap lai!");
        }
    } while (n<0 || n>MAX);
    NhapMang(a,n);
    XuatMang(a,n);

    printf ("\nMang b co chua so nguyen to cua mang a: \n");
    TachMang(a,n);

    printf ("Mang c con lai: ");
    Mangconlai(a,n);
    return 0;
}