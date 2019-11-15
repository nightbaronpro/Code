#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input your number: " << endl;
    cin >> n;
    bool flag = true;
    for (int i=2; i<n; i++)
    {
        if (n%i == 0)
        {
            flag = false;
        }
    }
    if (flag == true)
    {
        cout << n << "\tis prime numbers" << endl;
    }
    return 0;
}