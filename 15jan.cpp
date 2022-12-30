#include<iostream>
using namespace std;
int main()
{
    int t,dsa1,toc1,dm1,dsa2,toc2,dm2,dragon,sloth;
    cin>>t;
while(t--)
{
    cin>>dsa1>>toc1>>dm1;
    cout<<"\n";
    cin>>dsa2>>toc2>>dm2;

    dragon=dsa1+toc1+dm1;
    sloth=dsa2+toc2+dm2;
    if(dragon>sloth)
    {
        cout<<"dragon"<<endl;
    }
    else if(dragon<sloth)
    {
        cout<<"sloth"<<endl;
    }
    else if(dragon=sloth)
    {
        if(dsa1>dsa2)
        {
            cout<<"dragon"<<endl;
        }
        else if(dsa1<dsa2)
        {
        cout<<"sloth";
        }
        else if(dsa1=dsa2)
        {
            if(toc1>toc2)
        {
            cout<<"dragon"<<endl;
        }
            else if(toc1<toc2)
        {
        cout<<"sloth";
        }
         else{
        cout<<"TIE";
         }
        }
        
    }
   
}
    
   
    return 0;
} 