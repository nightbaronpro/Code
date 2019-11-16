#include <stdio.h>
#define MAX 100
void NhapMang (int a[],int n)
{
    do
    {
        printf ("Nhap vao so phan tu cua mang: ");
        scanf ("%d",&n);
        if (n<0 || n>MAX)
        {
            printf ("Nhap sai, moi ban nhap lai!");
        }
    } while (n<0 || n>MAX);
    for (int i=0; i<n; i++)
    {
        printf ("a[%d]",i);
        scanf ("%d",a[i]);
    }
}
void XuatMang (int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
void TachMang (int a[],int n,int Temp[],int nTemp)
{

}
int main()
{
    return 0;
}