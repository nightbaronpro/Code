#include <stdio.h>
#define MAX 100
void NhapMang (int a[],int n)
{
    for (int i=0; i<n; i++)
        {
            printf("a[%d] = ",i);
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
int max (int a[],int n)
{
    int max = a[0];
    for (int i=1; i<n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
//Ham tim BCNN cua mang
int TimBCNN (int a[],int n)
{
    int boiso = max (a,n);
    for (int i=0; i<n; i++)
    {
        if (boiso % a[i] != 0)
        {
            boiso += max(a,n);
            i = -1; //reset lai gia tri i.
        }
    }
    return boiso;
}
int main()
{
    int n;
    int a[MAX];
    do
    {
        printf("Nhap so phan tu: ");
        scanf("%d",&n);
        if(n<0 || n>MAX)
        {
            printf("Nhap sai!");
        }
    } while (n<0 || n>MAX);
    NhapMang(a,n);
    //XuatMang(a,n);
    int p = max(a,n);
    printf ("\nMax = %d",p);

    //Tim BCNN
    int boichung = TimBCNN(a,n);
    printf ("\nBoi chung nho nhat cua mang la: %d",boichung);
    return 0;
}
