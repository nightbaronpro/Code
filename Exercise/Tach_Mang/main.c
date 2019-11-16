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
int KiemTraNguyenTo(int n)
{
	if (n < 2)
	{
		return 0;
	}
	else if (n > 2)
	{
		if (n % 2 == 0)
		{
			return 0;
		}
		for (int i = 3; i <= sqrt((float)n); i += 2)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}
void TachMang (int a[],int n)
{
    int b[MAX], nb = 0;
    for (int i=0; i<n; i++)
    {
        if (KiemTraNguyenTo(a[i]) == 1)
        {
            b[nb] = a[i];
            nb++;
        }
    }
    XuatMang(b,nb);
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
    return 0;
}