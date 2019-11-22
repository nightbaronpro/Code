#include <stdio.h>
#define MAX 100
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
        printf ("%d\t",a[i]);
    }
}
int count (int a[],int n)
{
    int dem = 0;
    for (int i=0; i<n; i++)
    {
        if (a[i] < 0 )
        {
            printf ("Phan tu am la: %d",a[i]);
        }
    }
    return dem;
}
int main()
{
    int n;
    int a[MAX];
    do
    {
        printf("Nhap vao so phan tu cua mang: ");
        scanf("%d",&n);
        if (n<0 || n>MAX)
        {
            printf("Nhap sai, moi nhap lai!");
        }
    } while (n<0 || n>MAX);
    
    NhapMang(a,n);
    XuatMang(a,n);

    count(a,n); 
    return 0;
}