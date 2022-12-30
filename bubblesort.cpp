#include <iostream>
using namespace std;

// Whole code in main function
int main()
{
    int n, i, j, temp, k, a[10];
    cout << "\nEnter number of elements in array\n";
    cin >> n;

    cout << "\nEnter elements \n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {

            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}
