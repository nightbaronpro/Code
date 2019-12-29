#include <stdio.h>
#define MAX 100
void NhapMang (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
void XuatMang (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("%d\t",a[i]);
    }
}
int PrimeNum (int n)
{
    int flag = 1;
    for (int i=2; i<n/2; ++i)
    {
        if (n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
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
// So nguyen to lon nhat
int LargestPrime (int a[], int n)
{
    int count = 0;
    int max1;
    for (int i=0; i<n; i++)
    {
        if (PrimeNum(a[i]) == 1)
        {
            count++;
            max1 = a[i];
            break;
        }
    }
    if (count == 0)
    {
        return 0;
    }
    for (int i=i+1; i<n; i++)
    {
        if (PrimeNum(a[i]) == 1 && max1 > a[i])
        {
            max1 = PrimeNum(max(a,n));
        }
    }
    return max1;
}
int main ()
{
    int n;
    int a[MAX];
    printf ("------Prepare for final examination-----");
    do
    {
        printf("\nInput ammount of array: ");
        scanf("%d",&n);
        if (n<0 || n>MAX)
        {
            printf("You're wrong bitch!");
        }
    } while (n<0 || n>MAX);
    NhapMang(a,n);
    XuatMang(a,n);
    
    int SNT = LargestPrime(a,n);
    printf ("The largest prime number is: %d\n",SNT);   
    
    return 0;
}