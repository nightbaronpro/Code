#include <stdio.h>
#define MAX 100

void NhapMang (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
void XuatMang (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
int max (int a[], int n)
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
// Ham liet ke nhung vi tri chan co gia tri lon nhat.
int number (int a[], int n)
{
    int number = a[0];
    for (int i=0; i<n; i++)
    {
        if (number < a[i] && number % 2 == 0)
        {
            number = a[i];
        }
    }
    return number;
}
int main()
{
    int n;
    int a[MAX];
    do
    {
        printf ("nhap vao so phan tu cua mang: ");
        scanf("%d",&n);
        if (n<0 || n>MAX)
        {
            printf ("Nhap sai moi nhap lai!");
        }
    } while (n<0 || n>MAX);
    NhapMang(a,n);
    XuatMang(a,n);

    printf ("\nSo lon nhat trong mang: %d\n",max(a,n));
    int cau3 = number(a,n);
    printf ("so o vi tri chan lon nhat: %d\n",cau3);
    return 0;
}