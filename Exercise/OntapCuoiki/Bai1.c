#include <stdio.h>
#define MAX 100

void NhapMang (int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf("a[%d]: ", i);
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
int min (int a[], int n)
{
    int min = 0;
    for (int i=0; i<n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}
// Boi chung nho nhat (Least Common Multiple)
int BCNN (int a[], int n)
{
    int boiso = max(a,n);
    for (int i=0; i<n; i++)
    {
        if (boiso % a[i] != 0)
        {
            boiso += max(a,n);
            i = -1; //reset lai gia tri i ban dau.
        }
    }
    return boiso;
}
int main()
{
    int a[MAX];
    int n;
    do
    {
        printf ("\nInput n: ");
        scanf("%d",&n);
        if (n<0 || n>MAX)
        {
            printf("You're wrong bitch!");
        }
    } while (n<0 || n>MAX);

    NhapMang(a,n);
    XuatMang(a,n);
    int SLN = max(a,n);
    printf ("\nThe largest number of this array is: %d",SLN);
    int boichung = BCNN(a,n);
    printf("\n The least common multiple of this array is: %d\n", boichung);

    return 0;
}