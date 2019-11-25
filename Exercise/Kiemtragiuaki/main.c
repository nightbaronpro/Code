#include <stdio.h>
#define MAX 10
void NhapMang (int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
void XuatMang (int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
// Sap xep mang tang dan:
void daonguoc (int a[],int n)
{
    for (int i=n; i>=0; i++)
    {
        printf("%d\t",a[i]);
    }
}
// Sap xep gia tri le tang dan:
int Mangtang (int a[],int n)
{
    int flag = 1;
    for (int i=0; i<n-1; i++)
    {
        if (a[i] > a[i+1])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
void soletangdan (int a[],int n)
{
    int b[MAX], nb = 0;
    for (int i=0; i<n; i++)
    {
        if (a[i]%2 == 0)
        {
            b[nb] = a[i];
            nb++;
        }
    }
}
// Tim gia tri nho nhat trong mang:
int min (int a[],int n)
{
    int min = a[0];
    for (int i=0; i<n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}
// Tim so lon thu 2 trong mang:
int Lon2 (int a[],int n)
{
    int max1, max2;
    if (a[0] > a[1])
    {
        max1 = a[0];
        max2 = a[1];
    }
    else 
    {
        max1 = a[1];
        max2 = a[0];
    }
    for (int i=2; i<n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2)
        {
            max2 = a[i];
        }
        
    }
    return max2;
}
// Tim so nguyen to dau tien:
int SNT (int n)
{
    int flag = 1;
    for (int i=2; i<n/2; i++)
    {
        if (n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int SNTdautien (int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        if (SNT(a[i]) == 1)
        {
            return a[i];
        }
    }
    return 10;
}
// Tim so nguyen to nho nhat lon hon moi gia tri trong mang:
int max (int a[],int n)
{
    int max = a[0];
    for (int i=0; i<n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}


int main()
{
    int n;
    int a[MAX];
    do
    {
        printf("Nhap vao so phan tu: ");
        scanf("%d",&n);
        if (n<0 || n>MAX)
        {
            printf("Nhap sai, moi nhap lai!");
        }
    }while (n<0 || n>MAX);
    NhapMang(a,n);
    XuatMang(a,n);

    // Ai muon lam gi thi goi ham ra.
    return 0;
}