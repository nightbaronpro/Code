#include<stdio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

int KiemTraTangDan(int a[], int n)
{
	int flag = 1;
	for(int i = 0; i < n - 1; i++)
	{
		if(a[i] > a[i + 1])
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
int main()
{
	int n;
	int a[MAX];
    do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
		}
	}while(n <= 0 || n > MAX);
	nhap(a, n);
	xuat(a, n);

	int flag = KiemTraTangDan(a, n);
	if(flag == 1)
	{
		printf("\nMang tang dan");
	}
	else
	{
	    printf("\nKhong thoa DK");
	}
	return 0;
}