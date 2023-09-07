//             BANK MANAGEMENT USING C++
#include<iostream>
using namespace std;
class Bank{
    private:
            char name[100];
            char add[100];
            char type;
            int balance=0;
    public:
            void openAccount();
            void depositMoney();
            void withdrawMoney();
            void displayAccount();
};
void Bank :: openAccount(){
    cout << "Enter your full name: ";
    cin.ignore();
    cin.getline(name, 100);
    cout << "Enter your Address: ";
    cin.getline(add, 100);
    cout << "Type of Account saving(s) or current (c): ";
    cin>>type;
    cout << "Enter Initial amount: ";
    cin>>balance;
    cout<< "Your account is Created Successfully";
}
void Bank :: depositMoney(){
    int dep;
    cout << "Enter Amount To Deposit: ";
    cin >> dep;
    balance+=dep;
    cout << "Total Balance is: " << balance;
}
void Bank :: withdrawMoney(){
    float with;
    cout << "Enter Amount To Withdraw: ";
    cin >> with;
    balance-=with;
    cout << "Total Balance is: " << balance;
}
void Bank :: displayAccount(){
    cout << "Your Full name : " <<name <<endl;
    cout << "Your Address   : " <<add <<endl;
    cout << "Type of Account: " <<type <<endl;
    cout << "Total Balance  : " <<balance <<endl;
}
int main(){
    char ch;
    Bank obj;
    do{
    cout << "1) Open An Account\n";
    cout << "2) Deposit Money\n";
    cout << "3) Withdraw Money\n";
    cout << "4) Display account\n";
    cout << "5) Exit\n";
    cout << "Select the option \n";
    cin>> ch;
    switch (ch)
    {
    case '1':
        {cout << "Open An Account\n";
        obj.openAccount();
        break;}
    
    case '2':
        {cout << "Deposit Money\n";
        obj.depositMoney();
        break;}
    
    case '3':
        {cout << "Withdraw Money\n";
        obj.withdrawMoney();
        break;}
    
    case '4':
        {cout << "Display account\n";
        obj.displayAccount();
        break;}

    case '5':
        {
        exit(0);
        break;}
    
    default:
        {cout << "Invalid Case"; 
        break;}
    }
    cout << "\nPress any key to continue or else Press 0 for exit \n";
    cin>>ch;
    if(ch=='0'){
        exit(0);
    }
    }while(ch);
    
    return 0;
}