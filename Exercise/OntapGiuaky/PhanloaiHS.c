#include <stdio.h>

int main()
{
    float n;
    printf ("nhap diem cua hs: ");
    scanf ("%f",&n);
    if (n>=8 && n<10)
    {
        printf ("Hs gioi");
    }
    else if (n>6.5 && n<=8)
    {
        printf ("Hs tien tien");
    }
    else if (n>5 && n<=6.5)
    {
        printf ("Hs trung binh");
    }
    else if (n>3.5 && n<=5)
    {
        printf ("Hs yeu");
    }
    else 
    {
        printf ("Hs kem");
    }
    return 0;
}