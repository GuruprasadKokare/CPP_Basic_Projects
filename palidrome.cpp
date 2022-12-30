#include<iostream>

class Solution {
public:
    
        void cal()
        {     
        int x,a;
        std::cout<<"\nEnter a number\n";
        std::cin>>x;
        a=x;
        int reverse=0;
        while(x!=0)
        {
            int rem=x%10;
            reverse=reverse*10+rem;
            x=x/10;
        }
        if(reverse == a)
        {
            std::cout<<"true";
        }
         else{
             std::cout<<"false";
            }
        }
};
int main()
{
    Solution s1;
    s1.cal();
}