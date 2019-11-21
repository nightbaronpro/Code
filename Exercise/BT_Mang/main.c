#include <stdio.h>
#define LENGHT 100
void nhapMang (int a[],int n)
{
    for (int i=0; i<n; ++i)
        {
            printf("a[%d] = ",i);
            scanf("%d",&a[i]);
        }
}
void xuatMang (int a[],int n)
{
    for (int i=0; i<n; ++i)
    {
        printf("%d\t",a[i]);
    }
}
int max (int a[],int n)
{
    int max = a[0];
    for (int i=1; i<n; ++i)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

// code bay choi
int checkValue(int a[],int n, int max, int min){
    int max , min;
    int value = a[0];
    for(int i = 1; i < n ; ++i){
        a[i] > value ? max = a[i] : min = a[i] ;
        while(true){
            min > max ? max = min ? value = min;
            break;
        }
    }
}

int min (int a[],int n)
{
    int min = a[0];
    for (int i=0; i<n; ++i)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}
//Ham tim BCNN cua mang
int timBCNN (int a[],int n)
{
    int boiso = min (a,n);
    for (int i=0; i<n; i++)
    {
        if (boiso % a[i] != 0)
        {
            boiso += min(a,n);
            i = -1; //reset lai gia tri i.
        }
    }
    return boiso;
}
int main()
{
    int size;
    int array[LENGHT];
    do
    {
        printf("Nhap so phan tu: ");
        scanf("%d",&size);
        if(size<0 || size>LENGHT)
        {
            printf("Nhap sai!");
        }
    } while (size<0 || size>LENGHT);
    
    nhapMang(array,size);
    //XuatMang(a,n);
    
    /*-----------
    int _max, _min;
    checkValur(array, n, _max, _min);
    printf("max / min is: %d / %d",_max,_min);
    -----------*/
    
    
    int max = max(array,size,);
    printf ("\nMax = %d",max);

    //Tim BCNN
    int boichung = timBCNN(array,size);
    printf ("\nBoi chung nho nhat cua mang la: %d",boichung);
    return 0;
}
