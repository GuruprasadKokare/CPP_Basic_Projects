#include <iostream>
using namespace std;

class bubblesort
{
public:
    int i, j, a[100], temp;
    void insrtarr(int n)
    {
        cout<<"\nEnter array elements\n";
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
    }

    void sort(int n)
    {


        for (i = 0; i < 2*n; i++)
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
   }

    void show(int n)
    {
        for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    } 
    }
};

int main()
{
    int n;
    cout << "\nEnter n\n";
    cin >> n;
    bubblesort obj;
    obj.insrtarr(n);
    obj.sort(n);
    obj.show(n);    
}