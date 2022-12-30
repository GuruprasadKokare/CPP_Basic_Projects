#include <iostream>
using namespace std;

class ATM
{
public:
  int bal, d, w;

  int insrt()
  {

    cout << "\nEnter opening account balence \n";
    cin >> bal;
    cout << "\nYour acount balance is ";
    return bal;
  }

  int withdraw()
  {
    cout << "\nEnter amount of withdraw\n";
    cin >> w;
    if (w % 5 == 0 && w < bal)
    {
      bal = bal - w;
      cout << "\n\ntransaction succesfull";
      cout << "\nYour new acount balance is " << bal;
    }
    else
      cout << "Transaction Failed!\nEnter valid transaction amount\n";
  }

  int deposit()
  {
    cout << "\nEnter amount of deposit\n";
    cin >> d;
    if (d % 5 == 0)
    {
      bal = bal + d;
      cout << "\n\ntransaction succesfull";
      cout << "\nYour new acount balance is " << bal;
    }
    else
    {
      cout << "\nTransaction Failed!\nEnter valid transaction amount\n(amount should be multiple of 5)\n";
    }
  }
};
int main()
{

  ATM obj;
  obj.insrt();

  int action;
  cout << "\n\n1) Withdraw money from account\n2) Deposite money to account \n\n";
  cin >> action;
  
  switch (action)
  {
  case 1:
    obj.withdraw();
    break;

  case 2:
    obj.deposit();
    break;

  default:
    cout << "\nTransaction Failed! Choose correct option\n";
    break;
  }
  

  cout << "\nThank You :)\n";
  return 0;

} 
