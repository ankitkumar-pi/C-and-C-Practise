#include <iostream>
using namespace std;


void showMenu()
{
    cout<<"**********Menu**********"<<endl;
    cout<<"1.Checdk Balance"<< endl;
    cout<<"2.Deposite"<< endl;
    cout<<"3.Withdraw"<< endl;
    cout<<"**********Menu**********"<<endl;



}
int main()
{
    // check balance,deposite , withdraw , show menu

    showMenu();
    double money;
    int option;
    cout<<"Choose one Option "<<endl;
    cin >> option;

    if (option == 1)    
    {
        cout<<"The balance is ___ dollar";
    }
    else if (option ==2)
    {   double money;
        cout<<"How much money you wanna deposite"<<endl;
        cin>> money;
        cout<<"Please enter the "<< money<<" into the atm"<<endl;
    }
    else if (option == 3)       
    {   double money;
        cout<<"How much money you wanna Withdraw"<<endl;
        cin>> money;
        cout<<"The request for withdraw of "<< money <<" is being proceed please wait"<<endl;
    }
    
    {


    }
    



    system("pause>0");

}