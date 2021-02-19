#include <iostream>

using namespace std;

int main()
{
    int amount;
    double balance, rem_bala;

    cin>>amount;
    cin>>balance;

    if(amount%5==0)
    {
        if(amount<balance && ((amount+0.5)<=balance))
        {
            rem_bala=balance-amount-(0.5);
            cout<<rem_bala<<endl;
        }

        else
        {
            cout<<balance;
        }
    }

    else
    {
        cout<<balance<<endl;

    }
    return 0;

}