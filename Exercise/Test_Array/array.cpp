#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100
void InputArr (int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        cout << "a[" << i << "] = " << endl;
        cin >> a[i];
    }
}
void OutputArr (int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        cout << " " << a[i];
    }
}
bool CheckPrime (int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            return false;
        }
    }
    return true;
}
// Bai toan dem trong mang co bao nhieu so nguyen to
int count (int a[],int n)
{
    int count = 0;
    for (int i=0; i<n; i++)
    {
        if (CheckPrime(a[i]) == true)
        {
            count ++;
        }
    }
    return count;
}
int main()
{
    int n,a[MAX];
    cout << "-------Test Array--------";
    cout << "\nInput amount of array: ";
    cin >> n;
    InputArr(a,n);
    OutputArr(a,n);
    cout << "\nAmount of prime numbers is: " << count(a,n) << endl;
    system ("pause");
    return 0;
}
