#include <stdio.h>
#include <math.h>
#define MAX 100
void Nhapmang (int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("a[%d] = ",i);
        scanf ("%d",&a[i]);
    }
}
void Xuatmang (int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("%d\t",a[i]);
    }
}
// Check so nguyen to.
int Kiemtra (int n)
{
    if (n<=1)
    {
        return 0;
    }
    for (int i=0; i<sqrt(n); i++)
    {
        if (n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
// Check mang co phai toan so nguyen to hay khong? Cach 1:
int count (int a[],int n)
{
    int count = 0;
    for (int i=0; i<n; i++)
    {
        if (Kiemtra(a[i]) == 1)
        {
            count ++;
        }
    }
    if (count == n)
    {
        return 1;
    }
    return count;
}
// Check xem mang co phai toan so nguyen khong? Cach 2:
int count2 (int a[],int n)
{
    int count2 = 0;
    for (int i=0; i<n; i++)
    {
        if (Kiemtra(a[i]) == 0)
        {
            count2 ++;
        }
    }
    if (count2 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,a[MAX];
    do
    {
        printf ("Nhap vao so phan tu cua mang: ");
        scanf ("%d",&n);
        if (n<0 || n>MAX)
        {
            printf ("Nhap sai!");
        }
    } while (n<0 || n>MAX);
    Nhapmang(a,n);
    Xuatmang(a,n);
    
    return 0;
}