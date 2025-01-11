#include <iostream>
#include <map>
using namespace std;


map<string, int>AccountNameBalance;

class Account
{
private:
    map<string, int>AccountNameBalance;
    string FullName;



public:
    void OpenAccount()
{
    string FirstName, LastName;
    int Balance;
    cout<<"Enter Your First Name: ";
    cin>>FirstName;
    cout<<"Enter Your Last Name: ";
    cin>>LastName;
    cout<<"Enter Your Initial Balance: ";
    cin>>Balance;

    if(!FirstName.empty() && !LastName.empty() && Balance != 0)
    {
        string fullname = FirstName +" "+ LastName;
        AccountNameBalance[fullname] = Balance;
        cout<<"Congratulations, Account is Created"<<endl;
        cout<<endl;
        cout<<"First Name: "<<FirstName<<endl;
        cout<<"Last Name: "<<LastName<<endl;
        cout<<"Balance: "<<Balance<<endl;  
        cout<<endl;
      
    }

}

void Deposit()
    {
        int amount;
        cout<<"Enter FullName to Deposit money: ";
        cin.ignore();
        getline(cin,FullName);
        if(AccountNameBalance.find(FullName) == AccountNameBalance.end())
        {
            cout<<"Account With That Full Name Not Found";
            return;
        }
        cout<<"Enter Amount to Deposit: ";
        cin>>amount;
        int newBalance = AccountNameBalance[FullName] + amount;
        AccountNameBalance[FullName] = newBalance;
        cout<<"Your New Balance is "<<AccountNameBalance[FullName]<<endl;
    }   


void ShowAll()
{
    if(AccountNameBalance.empty())
    {
        cout<<"No Account is Found"<<endl;
        cout<<endl;
        return;
    }
    cout<<"List of Account "<<endl;
    cout<<endl;


    for (map<string, int>::iterator it = AccountNameBalance.begin(); it != AccountNameBalance.end(); it++)
    {
        cout<<"Name: "<<it->first<<endl<<"Balance: "<<it->second<<endl;
        cout<<endl;
    }

}

void Withdrawal()
{
    int w;
    cout<<"Enter Accound to widthdraw from: ";
    cin.ignore();
    getline(cin,FullName);
    if( AccountNameBalance.find(FullName) == AccountNameBalance.end())
    {
        cout<<"Account Not found"<<endl;
        cout<<endl;
        return;
    }
    cout<<"Enter Withdrawal Amount: ";
    cin>>w;

    if(AccountNameBalance[FullName] - w < 0)
    {
        cout<<"You dont have enought money to widthwraw "<<endl;
        cout<<endl;
        return;
    }
    int newbalance = AccountNameBalance[FullName] - w;
    cout<<"current balance is "<<newbalance<<endl;
    cout<<endl;
    AccountNameBalance[FullName] = newbalance;

}

void Balance()
{
   cout<<"Enter FullName to show Balance: ";
   cin.ignore();
   getline(cin,FullName);
   if(AccountNameBalance.find(FullName) == AccountNameBalance.end())
        {
            cout<<"Account is not found: "<<endl;;
        }
    cout<<endl;
    cout<<"Account "<< FullName <<" Balance is "<<AccountNameBalance[FullName]<<endl;
    cout<<endl;
}

void closeAccount()
{
   cout<<"Enter name to close account: ";
   cin.ignore();
   getline(cin,FullName);
   if(AccountNameBalance.find(FullName) == AccountNameBalance.end())
        {
            cout<<"Account is not found";
            cout<<endl;
        }
    AccountNameBalance.erase(FullName);
    cout<<endl;
    cout<<"Account "<< FullName <<" Has beem deleted "; 
    cout<<endl;
}
};


void option()
{
    Account account;
    bool running = true;
    
        while (running)
        {
    
    cout<<"Select One Option Below:"<<endl;
    cout<<"1 Open an Account"<<endl;
    cout<<"2 Balance Enquiry"<<endl;
    cout<<"3 Deposit"<<endl;
    cout<<"4 Withdrawal"<<endl;
    cout<<"5 Close an Account"<<endl;
    cout<<"6 Show All Accounts"<<endl;
    cout<<"7 Quit"<<endl;

    int n;
    cout<<"Enter Your Choice: ";
    cin>>n;
    switch(n)
    {
    case(1): 
        account.OpenAccount();
        break;
    case(2):
        account.Balance();
        break;
    case(3):
        account.Deposit();
        break;
    case(4):
        account.Withdrawal();
        break;
    case(5):
        account.closeAccount();
        break;
    case(6):
        account.ShowAll();
        break;
    case(7):
        cout << "Exiting... Thank you for using the banking system!" << endl;
        break;
    default:
        cout << "Invalid Choice. Please try again." << endl;      
    }
        }
}



int main()
{   
    Account account;
    bool running = true;
    while(running)
    {
    cout<<"*** Banking System ***"<<endl;
    cout<<"Select One Option Below:"<<endl;
    cout<<"1 Open an Account"<<endl;
    cout<<"2 Balance Enquiry"<<endl;
    cout<<"3 Deposit"<<endl;
    cout<<"4 Withdrawal"<<endl;
    cout<<"5 Close an Account"<<endl;
    cout<<"6 Show All Accounts"<<endl;
    cout<<"7 Quit"<<endl;
    int choice;
    cout<<"Enter Your Choice: ";
    cin>>choice;

    switch(choice)
    {
    case(1): 
        account.OpenAccount();
        break;
    case(2):
        account.Balance();
        break;
    case(3):
        account.Deposit();
        break;
    case(4):
        account.Withdrawal();
        break;
    case(5):
        account.closeAccount();
        break;
    case(6):
        account.ShowAll();
        break;
    case(7):
        cout << "Exiting... Thank you for using the banking system!" << endl;
        running = false;
        break;
    default:
        cout << "Invalid Choice. Please try again." << endl;      
    }



    }
    return 0;
}