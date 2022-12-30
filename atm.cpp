#include<iostream>
using namespace std;
int main()
{
    int x;
    float y,t;
    cout<<"\nEnter account balence \n";
    cin>>y;
    cout<<"\nYour acount balance is "<<y;
    cout<<"\nEnter amount of withdraw\n";
    cin>>x;
    if(x%5==0)
    {
        y=y-x-0.50;
        cout<<"\n transaction succesfull";
        cout<<"\nYour acount balance is "<<y;
    
    }
    else
    cout<<"Enter valid transaction amount";

  return 0;
    
} // namespace std;

